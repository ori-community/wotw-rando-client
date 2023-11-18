#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLegStompBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLegStompBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLegStompBehaviour {
        inline app::PetrifiedOwlBossLegStompBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossLegStompBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLegStompBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0476E118));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLegStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLegStompBehaviour__Class>(type_info(), "", "PetrifiedOwlBossLegStompBehaviour");
        }
        inline app::PetrifiedOwlBossLegStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLegStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLegStompBehaviour
} // namespace app::classes::types
