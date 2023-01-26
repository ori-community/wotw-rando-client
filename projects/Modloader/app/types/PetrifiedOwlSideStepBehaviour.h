#pragma once
#include <Modloader/app/structs/PetrifiedOwlSideStepBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlSideStepBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSideStepBehaviour {
        inline app::PetrifiedOwlSideStepBehaviour__Class** type_info() {
            static app::PetrifiedOwlSideStepBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlSideStepBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlSideStepBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSideStepBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlSideStepBehaviour");
        }
        inline app::PetrifiedOwlSideStepBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSideStepBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSideStepBehaviour
} // namespace app::classes::types
