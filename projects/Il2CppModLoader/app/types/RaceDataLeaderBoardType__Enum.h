#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceDataLeaderBoardType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceDataLeaderBoardType__Enum__Class** type_info;
        inline app::RaceDataLeaderBoardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceDataLeaderBoardType__Enum__Class>(type_info, "SystemIntegration.Races", "RaceDataLeaderBoardType");
        }
        inline app::RaceDataLeaderBoardType__Enum* create() {
            return il2cpp::create_object<app::RaceDataLeaderBoardType__Enum>(get_class());
        }
    } // namespace RaceDataLeaderBoardType__Enum
} // namespace app::classes::types
