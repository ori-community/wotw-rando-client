#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour__Class** type_info = (app::PetrifiedOwlBossRainOfFeathersBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04735CC8));
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossRainOfFeathersBehaviour__Class>(type_info, "", "PetrifiedOwlBossRainOfFeathersBehaviour");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour
} // namespace app::classes::types
