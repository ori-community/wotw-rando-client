#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFeatherFlurryBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFeatherFlurryBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFeatherFlurryBehaviour {
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFeatherFlurryBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFeatherFlurryBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047842F8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFeatherFlurryBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFeatherFlurryBehaviour");
        }
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFeatherFlurryBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFeatherFlurryBehaviour
} // namespace app::classes::types
