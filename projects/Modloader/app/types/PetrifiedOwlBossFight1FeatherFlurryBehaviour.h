#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour {
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472E2A0));
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1FeatherFlurryBehaviour");
        }
        inline app::PetrifiedOwlBossFight1FeatherFlurryBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1FeatherFlurryBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1FeatherFlurryBehaviour
} // namespace app::classes::types
