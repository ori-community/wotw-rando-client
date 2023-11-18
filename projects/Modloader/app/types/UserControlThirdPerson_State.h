#pragma once
#include <Modloader/app/structs/UserControlThirdPerson_State.h>
#include <Modloader/app/structs/UserControlThirdPerson_State__Boxed.h>
#include <Modloader/app/structs/UserControlThirdPerson_State__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserControlThirdPerson_State {
        inline app::UserControlThirdPerson_State__Class** type_info() {
            static app::UserControlThirdPerson_State__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserControlThirdPerson_State__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserControlThirdPerson_State__Class* get_class() {
            return il2cpp::get_nested_class<app::UserControlThirdPerson_State__Class>(type_info(), "RootMotion.Demos", "UserControlThirdPerson", "State");
        }
        inline app::UserControlThirdPerson_State* create() {
            return il2cpp::create_object<app::UserControlThirdPerson_State>(get_class());
        }
        inline app::UserControlThirdPerson_State__Boxed* box(app::UserControlThirdPerson_State value) {
            return il2cpp::box_value<app::UserControlThirdPerson_State__Boxed>(get_class(), value);
        }
    } // namespace UserControlThirdPerson_State
} // namespace app::classes::types
