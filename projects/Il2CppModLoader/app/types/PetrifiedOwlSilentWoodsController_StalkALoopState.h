#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkALoopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class** type_info;
        inline app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkALoopState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkALoopState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkALoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkALoopState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkALoopState
} // namespace app::classes::types
