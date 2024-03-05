# CMakeList.txt : projet CMake pour Akkith_Journey, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Akkith_Journey")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (Akkith_Journey "Akkith_Journey.cpp" "Akkith_Journey.h" "Actors/Actor.h" "Actors/Actor.cpp" "Actors/Player.h" "Actors/Player.cpp" "Inventory/Items/Item.h" "Inventory/Items/Item.cpp" "Inventory/Inventory.h" "Inventory/Inventory.cpp" "Utils/Drawable.h" "Data/Data.h" "Utils/Drawable.cpp" "Input/PlayerInputHandler.h" "Input/PlayerInputHandler.cpp"   "Utils/Utils.h" "Utils/Utils.cpp" "Events/Event.h" "Events/Event.cpp" "System/GameManager.h" "System/GameManager.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Akkith_Journey PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
