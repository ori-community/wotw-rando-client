#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLaserBehaviour {
        namespace {
            app::PetrifiedOwlLaserBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlLaserBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLaserBehaviour__Class>(type_info, "Moon", "PetrifiedOwlLaserBehaviour");
        }
        inline app::PetrifiedOwlLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlLaserBehaviour
} // namespace app::classes::types
