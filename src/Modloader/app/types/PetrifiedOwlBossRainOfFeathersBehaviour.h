#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossRainOfFeathersBehaviour {
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossRainOfFeathersBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossRainOfFeathersBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04735CC8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossRainOfFeathersBehaviour__Class>(type_info(), "", "PetrifiedOwlBossRainOfFeathersBehaviour");
        }
        inline app::PetrifiedOwlBossRainOfFeathersBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossRainOfFeathersBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossRainOfFeathersBehaviour
} // namespace app::classes::types
