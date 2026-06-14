#pragma once
#include <Modloader/app/structs/CleverMenuItemGroupBase__Array.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase__Array {
        inline app::CleverMenuItemGroupBase__Array__Class** type_info() {
            static app::CleverMenuItemGroupBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemGroupBase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemGroupBase__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroupBase__Array__Class>(type_info(), "", "CleverMenuItemGroupBase[]");
        }
        inline app::CleverMenuItemGroupBase__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase__Array>(get_class());
        }
    } // namespace CleverMenuItemGroupBase__Array
} // namespace app::classes::types
