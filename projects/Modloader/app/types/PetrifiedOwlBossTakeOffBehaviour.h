#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossTakeOffBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossTakeOffBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTakeOffBehaviour {
        inline app::PetrifiedOwlBossTakeOffBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossTakeOffBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossTakeOffBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04779D10));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossTakeOffBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossTakeOffBehaviour__Class>(type_info(), "", "PetrifiedOwlBossTakeOffBehaviour");
        }
        inline app::PetrifiedOwlBossTakeOffBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTakeOffBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossTakeOffBehaviour
} // namespace app::classes::types
