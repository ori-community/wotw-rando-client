#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossSpitBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossSpitBehaviour {
        inline app::PetrifiedOwlBossSpitBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossSpitBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0474A998));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossSpitBehaviour__Class>(type_info(), "", "PetrifiedOwlBossSpitBehaviour");
        }
        inline app::PetrifiedOwlBossSpitBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossSpitBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossSpitBehaviour
} // namespace app::classes::types
