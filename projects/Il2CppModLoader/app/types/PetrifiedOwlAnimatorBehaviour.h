#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlAnimatorBehaviour {
        namespace {
            app::PetrifiedOwlAnimatorBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlAnimatorBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlAnimatorBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAnimatorBehaviour__Class>(type_info, "Moon", "PetrifiedOwlAnimatorBehaviour");
        }
        inline app::PetrifiedOwlAnimatorBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlAnimatorBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlAnimatorBehaviour
} // namespace app::classes::types
