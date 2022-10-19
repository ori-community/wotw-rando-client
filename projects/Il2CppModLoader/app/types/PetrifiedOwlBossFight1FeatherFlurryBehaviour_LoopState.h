#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class** type_info = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x0471D590));
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class>(type_info, "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState
} // namespace app::classes::types
