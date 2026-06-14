#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1RainOfFeathersBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1RainOfFeathersBehaviour {
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0475C4D0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1RainOfFeathersBehaviour");
        }
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1RainOfFeathersBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1RainOfFeathersBehaviour
} // namespace app::classes::types
