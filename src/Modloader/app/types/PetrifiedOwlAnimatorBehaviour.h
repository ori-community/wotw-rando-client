#pragma once
#include <Modloader/app/structs/PetrifiedOwlAnimatorBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlAnimatorBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlAnimatorBehaviour {
        inline app::PetrifiedOwlAnimatorBehaviour__Class** type_info() {
            static app::PetrifiedOwlAnimatorBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlAnimatorBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlAnimatorBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAnimatorBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlAnimatorBehaviour");
        }
        inline app::PetrifiedOwlAnimatorBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlAnimatorBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlAnimatorBehaviour
} // namespace app::classes::types
