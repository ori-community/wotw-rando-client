#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreUpdate_AIUpdate {
        namespace {
            inline app::PreUpdate_AIUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PreUpdate_AIUpdate__Class** type_info = &type_info_ref;
        inline app::PreUpdate_AIUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_AIUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "AIUpdate");
        }
        inline app::PreUpdate_AIUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_AIUpdate>(get_class());
        }
        inline app::PreUpdate_AIUpdate__Boxed* box(app::PreUpdate_AIUpdate value) {
            return il2cpp::box_value<app::PreUpdate_AIUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_AIUpdate
} // namespace app::classes::types
