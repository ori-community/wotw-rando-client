#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossShriekArena2Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossShriekArena2Behaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossShriekArena2Behaviour {
        inline app::PetrifiedOwlBossShriekArena2Behaviour__Class** type_info() {
            static app::PetrifiedOwlBossShriekArena2Behaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossShriekArena2Behaviour__Class**)(modloader::win::memory::resolve_rva(0x04730488));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossShriekArena2Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossShriekArena2Behaviour__Class>(type_info(), "", "PetrifiedOwlBossShriekArena2Behaviour");
        }
        inline app::PetrifiedOwlBossShriekArena2Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossShriekArena2Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossShriekArena2Behaviour
} // namespace app::classes::types
