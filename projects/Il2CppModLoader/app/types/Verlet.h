#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Verlet {
        namespace {
            app::Verlet__Class* type_info_ref = nullptr;
        }
        app::Verlet__Class** type_info = &type_info_ref;
        inline app::Verlet__Class* get_class() {
            return il2cpp::get_class<app::Verlet__Class>(type_info, "", "Verlet");
        }
        inline app::Verlet* create() {
            return il2cpp::create_object<app::Verlet>(get_class());
        }
    } // namespace Verlet
} // namespace app::classes::types
