#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PiranhaChaseBehaviour {
        namespace {
            app::PiranhaChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::PiranhaChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaChaseBehaviour__Class>(type_info, "", "PiranhaChaseBehaviour");
        }
        inline app::PiranhaChaseBehaviour* create() {
            return il2cpp::create_object<app::PiranhaChaseBehaviour>(get_class());
        }
    } // namespace PiranhaChaseBehaviour
} // namespace app::classes::types
