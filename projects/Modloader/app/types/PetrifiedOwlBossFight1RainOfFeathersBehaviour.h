#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1RainOfFeathersBehaviour {
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0475C4D0));
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1RainOfFeathersBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1RainOfFeathersBehaviour");
        }
        inline app::PetrifiedOwlBossFight1RainOfFeathersBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1RainOfFeathersBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1RainOfFeathersBehaviour
} // namespace app::classes::types
