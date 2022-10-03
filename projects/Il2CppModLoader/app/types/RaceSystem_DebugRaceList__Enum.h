#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceSystem_DebugRaceList__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceSystem_DebugRaceList__Enum__Class** type_info;
        inline app::RaceSystem_DebugRaceList__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_DebugRaceList__Enum__Class>(type_info, "", "RaceSystem", "DebugRaceList");
        }
        inline app::RaceSystem_DebugRaceList__Enum* create() {
            return il2cpp::create_object<app::RaceSystem_DebugRaceList__Enum>(get_class());
        }
    } // namespace RaceSystem_DebugRaceList__Enum
} // namespace app::classes::types
