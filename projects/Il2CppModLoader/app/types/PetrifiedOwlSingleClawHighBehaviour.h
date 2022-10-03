#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawHighBehaviour {
        namespace {
            app::PetrifiedOwlSingleClawHighBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlSingleClawHighBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlSingleClawHighBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSingleClawHighBehaviour__Class>(type_info, "Moon", "PetrifiedOwlSingleClawHighBehaviour");
        }
        inline app::PetrifiedOwlSingleClawHighBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawHighBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawHighBehaviour
} // namespace app::classes::types
