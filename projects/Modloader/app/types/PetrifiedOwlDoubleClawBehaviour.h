#pragma once
#include <Modloader/app/structs/PetrifiedOwlDoubleClawBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlDoubleClawBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlDoubleClawBehaviour {
        inline app::PetrifiedOwlDoubleClawBehaviour__Class** type_info() {
            static app::PetrifiedOwlDoubleClawBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlDoubleClawBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0472D988));
            }
            return cache;
        }
        inline app::PetrifiedOwlDoubleClawBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlDoubleClawBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlDoubleClawBehaviour");
        }
        inline app::PetrifiedOwlDoubleClawBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlDoubleClawBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlDoubleClawBehaviour
} // namespace app::classes::types
