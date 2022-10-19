#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlJumpBehaviour {
        namespace {
            inline app::PetrifiedOwlJumpBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlJumpBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlJumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlJumpBehaviour__Class>(type_info, "Moon", "PetrifiedOwlJumpBehaviour");
        }
        inline app::PetrifiedOwlJumpBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlJumpBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlJumpBehaviour
} // namespace app::classes::types
