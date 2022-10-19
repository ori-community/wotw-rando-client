#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedUpdate_NewInputFixedUpdate {
        namespace {
            inline app::FixedUpdate_NewInputFixedUpdate__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdate_NewInputFixedUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_NewInputFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_NewInputFixedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "NewInputFixedUpdate");
        }
        inline app::FixedUpdate_NewInputFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_NewInputFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_NewInputFixedUpdate__Boxed* box(app::FixedUpdate_NewInputFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_NewInputFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_NewInputFixedUpdate
} // namespace app::classes::types
