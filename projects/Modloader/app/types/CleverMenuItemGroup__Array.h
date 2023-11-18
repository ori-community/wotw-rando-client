#pragma once
#include <Modloader/app/structs/CleverMenuItemGroup__Array.h>
#include <Modloader/app/structs/CleverMenuItemGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroup__Array {
        inline app::CleverMenuItemGroup__Array__Class** type_info() {
            static app::CleverMenuItemGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroup__Array__Class>(type_info(), "", "CleverMenuItemGroup[]");
        }
        inline app::CleverMenuItemGroup__Array* create() {
            return il2cpp::create_object<app::CleverMenuItemGroup__Array>(get_class());
        }
    } // namespace CleverMenuItemGroup__Array
} // namespace app::classes::types
