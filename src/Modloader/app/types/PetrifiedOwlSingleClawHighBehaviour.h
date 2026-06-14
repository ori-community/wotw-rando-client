#pragma once
#include <Modloader/app/structs/PetrifiedOwlSingleClawHighBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawHighBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawHighBehaviour {
        inline app::PetrifiedOwlSingleClawHighBehaviour__Class** type_info() {
            static app::PetrifiedOwlSingleClawHighBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlSingleClawHighBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSingleClawHighBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlSingleClawHighBehaviour");
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawHighBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawHighBehaviour
} // namespace app::classes::types
