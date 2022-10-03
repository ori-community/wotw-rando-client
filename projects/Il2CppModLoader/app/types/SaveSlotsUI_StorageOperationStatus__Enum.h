#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsUI_StorageOperationStatus__Enum {
        namespace {
            app::SaveSlotsUI_StorageOperationStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::SaveSlotsUI_StorageOperationStatus__Enum__Class** type_info = &type_info_ref;
        inline app::SaveSlotsUI_StorageOperationStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsUI_StorageOperationStatus__Enum__Class>(type_info, "", "SaveSlotsUI", "StorageOperationStatus");
        }
        inline app::SaveSlotsUI_StorageOperationStatus__Enum* create() {
            return il2cpp::create_object<app::SaveSlotsUI_StorageOperationStatus__Enum>(get_class());
        }
    } // namespace SaveSlotsUI_StorageOperationStatus__Enum
} // namespace app::classes::types
