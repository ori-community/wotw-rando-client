#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlSingleClawBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PetrifiedOwlSingleClawBehaviour__Class** type_info;
        inline app::PetrifiedOwlSingleClawBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlSingleClawBehaviour__Class>(type_info, "Moon", "PetrifiedOwlSingleClawBehaviour");
        }
        inline app::PetrifiedOwlSingleClawBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlSingleClawBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlSingleClawBehaviour
} // namespace app::classes::types
