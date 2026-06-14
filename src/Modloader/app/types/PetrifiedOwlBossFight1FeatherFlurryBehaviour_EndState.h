#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class** type_info() {
            static app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x047437F0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class>(type_info(), "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState
} // namespace app::classes::types
