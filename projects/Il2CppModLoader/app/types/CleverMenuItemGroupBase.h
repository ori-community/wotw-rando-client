#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase {
        namespace {
            app::CleverMenuItemGroupBase__Class* type_info_ref = nullptr;
        }
        app::CleverMenuItemGroupBase__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemGroupBase__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroupBase__Class>(type_info, "", "CleverMenuItemGroupBase");
        }
        inline app::CleverMenuItemGroupBase* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase>(get_class());
        }
        inline app::CleverMenuItemGroupBase__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemGroupBase__Array>(get_class(), size);
        }
    } // namespace CleverMenuItemGroupBase
} // namespace app::classes::types
