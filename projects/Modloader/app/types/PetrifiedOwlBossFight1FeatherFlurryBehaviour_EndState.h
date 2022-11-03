#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class** type_info = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x047437F0));
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState__Class>(type_info, "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_EndState
} // namespace app::classes::types
