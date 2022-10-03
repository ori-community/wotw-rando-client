#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormChaseBehaviour {
        namespace {
            app::SandWormChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::SandWormChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormChaseBehaviour__Class>(type_info, "", "SandWormChaseBehaviour");
        }
        inline app::SandWormChaseBehaviour* create() {
            return il2cpp::create_object<app::SandWormChaseBehaviour>(get_class());
        }
    } // namespace SandWormChaseBehaviour
} // namespace app::classes::types
