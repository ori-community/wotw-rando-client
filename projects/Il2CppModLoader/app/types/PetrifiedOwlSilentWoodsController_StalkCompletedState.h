#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlSilentWoodsController_StalkCompletedState {
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class** type_info = (app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class**)(modloader::win::memory::resolve_rva(0x047430C8));
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlSilentWoodsController_StalkCompletedState__Class>(type_info, "", "PetrifiedOwlSilentWoodsController", "StalkCompletedState");
        }
        inline app::PetrifiedOwlSilentWoodsController_StalkCompletedState* create() {
            return il2cpp::create_object<app::PetrifiedOwlSilentWoodsController_StalkCompletedState>(get_class());
        }
    } // namespace PetrifiedOwlSilentWoodsController_StalkCompletedState
} // namespace app::classes::types
