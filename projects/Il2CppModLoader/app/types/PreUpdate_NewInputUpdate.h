#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_NewInputUpdate {
        namespace {
            app::PreUpdate_NewInputUpdate__Class* type_info_ref = nullptr;
        }
        app::PreUpdate_NewInputUpdate__Class** type_info = &type_info_ref;
        inline app::PreUpdate_NewInputUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_NewInputUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "NewInputUpdate");
        }
        inline app::PreUpdate_NewInputUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_NewInputUpdate>(get_class());
        }
        inline app::PreUpdate_NewInputUpdate__Boxed* box(app::PreUpdate_NewInputUpdate value) {
            return il2cpp::box_value<app::PreUpdate_NewInputUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_NewInputUpdate
} // namespace app::classes::types
