#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpBehaviour {
        namespace {
            app::JumpBehaviour__Class* type_info_ref = nullptr;
        }
        app::JumpBehaviour__Class** type_info = &type_info_ref;
        inline app::JumpBehaviour__Class* get_class() {
            return il2cpp::get_class<app::JumpBehaviour__Class>(type_info, "", "JumpBehaviour");
        }
        inline app::JumpBehaviour* create() {
            return il2cpp::create_object<app::JumpBehaviour>(get_class());
        }
    } // namespace JumpBehaviour
} // namespace app::classes::types
