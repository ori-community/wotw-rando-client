#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ELeaderboardDisplayType__Enum {
        namespace {
            app::ELeaderboardDisplayType__Enum__Class* type_info_ref = nullptr;
        }
        app::ELeaderboardDisplayType__Enum__Class** type_info = &type_info_ref;
        inline app::ELeaderboardDisplayType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardDisplayType__Enum__Class>(type_info, "Steamworks", "ELeaderboardDisplayType");
        }
        inline app::ELeaderboardDisplayType__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardDisplayType__Enum>(get_class());
        }
    } // namespace ELeaderboardDisplayType__Enum
} // namespace app::classes::types
