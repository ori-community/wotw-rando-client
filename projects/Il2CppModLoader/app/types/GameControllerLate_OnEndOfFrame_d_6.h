#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameControllerLate_OnEndOfFrame_d_6 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameControllerLate_OnEndOfFrame_d_6__Class** type_info;
        inline app::GameControllerLate_OnEndOfFrame_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::GameControllerLate_OnEndOfFrame_d_6__Class>(type_info, "", "GameControllerLate", "<OnEndOfFrame>d__6");
        }
        inline app::GameControllerLate_OnEndOfFrame_d_6* create() {
            return il2cpp::create_object<app::GameControllerLate_OnEndOfFrame_d_6>(get_class());
        }
    } // namespace GameControllerLate_OnEndOfFrame_d_6
} // namespace app::classes::types
