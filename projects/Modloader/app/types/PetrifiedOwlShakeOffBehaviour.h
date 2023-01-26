#pragma once
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlShakeOffBehaviour {
        inline app::PetrifiedOwlShakeOffBehaviour__Class** type_info() {
            static app::PetrifiedOwlShakeOffBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlShakeOffBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlShakeOffBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlShakeOffBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlShakeOffBehaviour");
        }
        inline app::PetrifiedOwlShakeOffBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlShakeOffBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlShakeOffBehaviour
} // namespace app::classes::types
