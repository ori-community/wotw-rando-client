#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChaseBehaviour {
        namespace {
            app::ChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::ChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::ChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ChaseBehaviour__Class>(type_info, "Moon", "ChaseBehaviour");
        }
        inline app::ChaseBehaviour* create() {
            return il2cpp::create_object<app::ChaseBehaviour>(get_class());
        }
    } // namespace ChaseBehaviour
} // namespace app::classes::types
