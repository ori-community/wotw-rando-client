#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkAToBState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class** type_info;
        inline app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkAToBState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkAToBState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkAToBState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkAToBState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkAToBState
} // namespace app::classes::types
