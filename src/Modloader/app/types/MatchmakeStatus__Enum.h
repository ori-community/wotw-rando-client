#pragma once
#include <Modloader/app/structs/MatchmakeStatus__Enum.h>
#include <Modloader/app/structs/MatchmakeStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakeStatus__Enum {
        inline app::MatchmakeStatus__Enum__Class** type_info() {
            static app::MatchmakeStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakeStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeStatus__Enum__Class>(type_info(), "PlayFab.ClientModels", "MatchmakeStatus");
        }
        inline app::MatchmakeStatus__Enum* create() {
            return il2cpp::create_object<app::MatchmakeStatus__Enum>(get_class());
        }
    } // namespace MatchmakeStatus__Enum
} // namespace app::classes::types
