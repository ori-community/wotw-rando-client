#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityState {
        namespace {
            inline app::EntityState__Class* type_info_ref = nullptr;
        }
        inline app::EntityState__Class** type_info = &type_info_ref;
        inline app::EntityState__Class* get_class() {
            return il2cpp::get_class<app::EntityState__Class>(type_info, "Moon", "EntityState");
        }
        inline app::EntityState* create() {
            return il2cpp::create_object<app::EntityState>(get_class());
        }
    } // namespace EntityState
} // namespace app::classes::types
