#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkCState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlSilentWoodsController_StalkCState__Class** type_info;
        inline app::PetrifiedOwlSilentWoodsController_StalkCState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkCState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkCState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkCState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkCState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkCState
} // namespace app::classes::types
