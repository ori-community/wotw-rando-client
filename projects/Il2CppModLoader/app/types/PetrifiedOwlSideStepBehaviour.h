#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSideStepBehaviour {
        namespace {
            app::PetrifiedOwlSideStepBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlSideStepBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlSideStepBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSideStepBehaviour__Class>(type_info, "Moon", "PetrifiedOwlSideStepBehaviour");
        }
        inline app::PetrifiedOwlSideStepBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSideStepBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSideStepBehaviour
} // namespace app::classes::types
