#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserControlThirdPerson {
        namespace {
            app::UserControlThirdPerson__Class* type_info_ref = nullptr;
        }
        app::UserControlThirdPerson__Class** type_info = &type_info_ref;
        inline app::UserControlThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::UserControlThirdPerson__Class>(type_info, "RootMotion.Demos", "UserControlThirdPerson");
        }
        inline app::UserControlThirdPerson* create() {
            return il2cpp::create_object<app::UserControlThirdPerson>(get_class());
        }
    } // namespace UserControlThirdPerson
} // namespace app::classes::types
