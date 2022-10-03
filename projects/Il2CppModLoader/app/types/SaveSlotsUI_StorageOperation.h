#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsUI_StorageOperation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotsUI_StorageOperation__Class** type_info;
        inline app::SaveSlotsUI_StorageOperation__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsUI_StorageOperation__Class>(type_info, "", "SaveSlotsUI", "StorageOperation");
        }
        inline app::SaveSlotsUI_StorageOperation* create() {
            return il2cpp::create_object<app::SaveSlotsUI_StorageOperation>(get_class());
        }
        inline app::SaveSlotsUI_StorageOperation__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotsUI_StorageOperation__Array>(get_class(), size);
        }
    } // namespace SaveSlotsUI_StorageOperation
} // namespace app::classes::types
