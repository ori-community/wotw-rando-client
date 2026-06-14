#pragma once
#include <Modloader/app/structs/GameControllerLate_OnEndOfFrame_d_6.h>
#include <Modloader/app/structs/GameControllerLate_OnEndOfFrame_d_6__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameControllerLate_OnEndOfFrame_d_6 {
        inline app::GameControllerLate_OnEndOfFrame_d_6__Class** type_info() {
            static app::GameControllerLate_OnEndOfFrame_d_6__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameControllerLate_OnEndOfFrame_d_6__Class**)(modloader::win::memory::resolve_rva(0x0470FA60));
            }
            return cache;
        }
        inline app::GameControllerLate_OnEndOfFrame_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::GameControllerLate_OnEndOfFrame_d_6__Class>(type_info(), "", "GameControllerLate", "<OnEndOfFrame>d__6");
        }
        inline app::GameControllerLate_OnEndOfFrame_d_6* create() {
            return il2cpp::create_object<app::GameControllerLate_OnEndOfFrame_d_6>(get_class());
        }
    } // namespace GameControllerLate_OnEndOfFrame_d_6
} // namespace app::classes::types
