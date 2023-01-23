#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates__Class** type_info = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates__Class**)(modloader::win::memory::resolve_rva(0x0474FBF0));
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates__Class>(type_info, "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour", "Fight1FeatherFlurryStates");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour_Fight1FeatherFlurryStates
} // namespace app::classes::types
