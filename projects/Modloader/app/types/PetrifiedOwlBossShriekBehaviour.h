#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossShriekBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossShriekBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossShriekBehaviour {
        inline app::PetrifiedOwlBossShriekBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossShriekBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossShriekBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04752A68));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossShriekBehaviour__Class>(type_info(), "", "PetrifiedOwlBossShriekBehaviour");
        }
        inline app::PetrifiedOwlBossShriekBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossShriekBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossShriekBehaviour
} // namespace app::classes::types
