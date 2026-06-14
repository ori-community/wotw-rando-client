#pragma once
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation__Array.h>
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsUI_StorageOperation__Array {
        inline app::SaveSlotsUI_StorageOperation__Array__Class** type_info() {
            static app::SaveSlotsUI_StorageOperation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotsUI_StorageOperation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotsUI_StorageOperation__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotsUI_StorageOperation__Array__Class>(type_info(), "", "SaveSlotsUI+StorageOperation[]");
        }
        inline app::SaveSlotsUI_StorageOperation__Array* create() {
            return il2cpp::create_object<app::SaveSlotsUI_StorageOperation__Array>(get_class());
        }
    } // namespace SaveSlotsUI_StorageOperation__Array
} // namespace app::classes::types
