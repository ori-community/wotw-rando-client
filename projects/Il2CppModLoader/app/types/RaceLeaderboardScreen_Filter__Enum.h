#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardScreen_Filter__Enum {
        namespace {
            app::RaceLeaderboardScreen_Filter__Enum__Class* type_info_ref = nullptr;
        }
        app::RaceLeaderboardScreen_Filter__Enum__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardScreen_Filter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceLeaderboardScreen_Filter__Enum__Class>(type_info, "", "RaceLeaderboardScreen", "Filter");
        }
        inline app::RaceLeaderboardScreen_Filter__Enum* create() {
            return il2cpp::create_object<app::RaceLeaderboardScreen_Filter__Enum>(get_class());
        }
    } // namespace RaceLeaderboardScreen_Filter__Enum
} // namespace app::classes::types
