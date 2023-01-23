#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase__Class.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase__Array.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase {
        namespace {
            inline app::CleverMenuItemGroupBase__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemGroupBase__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemGroupBase__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemGroupBase__Class>(type_info, "", "CleverMenuItemGroupBase");
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
