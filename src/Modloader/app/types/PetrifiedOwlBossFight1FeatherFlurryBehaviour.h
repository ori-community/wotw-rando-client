#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472E2A0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour
} // namespace app::classes::types
