#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericSpring1D {
        namespace {
            app::GenericSpring1D__Class* type_info_ref = nullptr;
        }
        app::GenericSpring1D__Class** type_info = &type_info_ref;
        inline app::GenericSpring1D__Class* get_class() {
            return il2cpp::get_class<app::GenericSpring1D__Class>(type_info, "", "GenericSpring1D");
        }
        inline app::GenericSpring1D* create() {
            return il2cpp::create_object<app::GenericSpring1D>(get_class());
        }
    } // namespace GenericSpring1D
} // namespace app::classes::types
