#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakeStatus__Enum {
        namespace {
            inline app::MatchmakeStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakeStatus__Enum__Class** type_info = &type_info_ref;
        inline app::MatchmakeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "MatchmakeStatus");
        }
        inline app::MatchmakeStatus__Enum* create() {
            return il2cpp::create_object<app::MatchmakeStatus__Enum>(get_class());
        }
    } // namespace MatchmakeStatus__Enum
} // namespace app::classes::types
