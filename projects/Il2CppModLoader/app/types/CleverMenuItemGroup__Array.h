#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup__Array {
        namespace {
            inline app::CleverMenuItemGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemGroup__Array__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroup__Array__Class>(type_info, "", "CleverMenuItemGroup[]");
        }
        inline app::CleverMenuItemGroup__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemGroup__Array>(get_class());
        }
    } // namespace CleverMenuItemGroup__Array
} // namespace app::classes::types
