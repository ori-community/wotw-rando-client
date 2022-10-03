#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsUI_StorageOperation__Array {
        namespace {
            app::SaveSlotsUI_StorageOperation__Array__Class* type_info_ref = nullptr;
        }
        app::SaveSlotsUI_StorageOperation__Array__Class** type_info = &type_info_ref;
        inline app::SaveSlotsUI_StorageOperation__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsUI_StorageOperation__Array__Class>(type_info, "", "SaveSlotsUI+StorageOperation[]");
        }
        inline app::SaveSlotsUI_StorageOperation__Array* create() {
            return il2cpp::create_object<app::SaveSlotsUI_StorageOperation__Array>(get_class());
        }
    } // namespace SaveSlotsUI_StorageOperation__Array
} // namespace app::classes::types
