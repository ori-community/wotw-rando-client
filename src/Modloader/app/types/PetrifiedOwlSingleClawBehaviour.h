#pragma once
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawBehaviour {
        inline app::PetrifiedOwlSingleClawBehaviour__Class** type_info() {
            static app::PetrifiedOwlSingleClawBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlSingleClawBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047816F8));
            }
            return cache;
        }
        inline app::PetrifiedOwlSingleClawBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSingleClawBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlSingleClawBehaviour");
        }
        inline app::PetrifiedOwlSingleClawBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawBehaviour
} // namespace app::classes::types
