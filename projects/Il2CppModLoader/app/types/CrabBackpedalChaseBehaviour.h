#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabBackpedalChaseBehaviour {
        namespace {
            app::CrabBackpedalChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::CrabBackpedalChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::CrabBackpedalChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabBackpedalChaseBehaviour__Class>(type_info, "Moon", "CrabBackpedalChaseBehaviour");
        }
        inline app::CrabBackpedalChaseBehaviour* create() {
            return il2cpp::create_object<app::CrabBackpedalChaseBehaviour>(get_class());
        }
    } // namespace CrabBackpedalChaseBehaviour
} // namespace app::classes::types
