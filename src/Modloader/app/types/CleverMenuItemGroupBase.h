#pragma once
#include <Modloader/app/structs/CleverMenuItemGroupBase.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase__Array.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase {
        inline app::CleverMenuItemGroupBase__Class** type_info() {
            static app::CleverMenuItemGroupBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemGroupBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemGroupBase__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroupBase__Class>(type_info(), "", "CleverMenuItemGroupBase");
        }
        inline app::CleverMenuItemGroupBase* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase>(get_class());
        }
        inline app::CleverMenuItemGroupBase__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemGroupBase__Array>(get_class(), size);
        }
        inline app::CleverMenuItemGroupBase__Array* create_array(const std::vector<app::CleverMenuItemGroupBase*>& items) {
            return il2cpp::array_new<app::CleverMenuItemGroupBase__Array>(get_class(), items);
        }
    } // namespace CleverMenuItemGroupBase
} // namespace app::classes::types
