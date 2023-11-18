#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class** type_info() {
            static app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class**)(modloader::win::memory::resolve_rva(0x0471D590));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState__Class>(type_info(), "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour", "LoopState");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_LoopState
} // namespace app::classes::types
