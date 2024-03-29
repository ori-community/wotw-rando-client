#pragma once
#include <Modloader/app/structs/PetrifiedOwlJumpBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlJumpBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlJumpBehaviour {
        inline app::PetrifiedOwlJumpBehaviour__Class** type_info() {
            static app::PetrifiedOwlJumpBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlJumpBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlJumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlJumpBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlJumpBehaviour");
        }
        inline app::PetrifiedOwlJumpBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlJumpBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlJumpBehaviour
} // namespace app::classes::types
