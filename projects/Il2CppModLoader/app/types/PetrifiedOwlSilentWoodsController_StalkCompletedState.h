#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkCompletedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class** type_info;
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkCompletedState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkCompletedState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkCompletedState
} // namespace app::classes::types
