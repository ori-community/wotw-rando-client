#pragma once
#include <Modloader/app/structs/UserControlThirdPerson.h>
#include <Modloader/app/structs/UserControlThirdPerson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserControlThirdPerson {
        inline app::UserControlThirdPerson__Class** type_info() {
            static app::UserControlThirdPerson__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserControlThirdPerson__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserControlThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::UserControlThirdPerson__Class>(type_info(), "RootMotion.Demos", "UserControlThirdPerson");
        }
        inline app::UserControlThirdPerson* create() {
            return il2cpp::create_object<app::UserControlThirdPerson>(get_class());
        }
    } // namespace UserControlThirdPerson
} // namespace app::classes::types
