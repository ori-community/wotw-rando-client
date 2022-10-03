#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase__Array {
        namespace {
            app::CleverMenuItemGroupBase__Array__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemGroupBase__Array__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemGroupBase__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroupBase__Array__Class>(type_info, "", "CleverMenuItemGroupBase[]");
        }
        inline app::CleverMenuItemGroupBase__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase__Array>(get_class());
        }
    } // namespace CleverMenuItemGroupBase__Array
} // namespace app::classes::types
