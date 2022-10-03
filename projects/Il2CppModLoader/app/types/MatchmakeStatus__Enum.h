#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakeStatus__Enum {
        namespace {
            app::MatchmakeStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::MatchmakeStatus__Enum__Class** type_info = &type_info_ref;
        inline app::MatchmakeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "MatchmakeStatus");
        }
        inline app::MatchmakeStatus__Enum* create() {
            return il2cpp::create_object<app::MatchmakeStatus__Enum>(get_class());
        }
    } // namespace MatchmakeStatus__Enum
} // namespace app::classes::types
