#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation__Class.h>
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation.h>
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation__Array.h>

namespace app::classes::types {
    namespace SaveSlotsUI_StorageOperation {
        inline app::SaveSlotsUI_StorageOperation__Class** type_info = (app::SaveSlotsUI_StorageOperation__Class**)(modloader::win::memory::resolve_rva(0x04727CD8));
        inline app::SaveSlotsUI_StorageOperation__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsUI_StorageOperation__Class>(type_info, "", "SaveSlotsUI", "StorageOperation");
        }
        inline app::SaveSlotsUI_StorageOperation* create() {
            return il2cpp::create_object<app::SaveSlotsUI_StorageOperation>(get_class());
        }
        inline app::SaveSlotsUI_StorageOperation__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotsUI_StorageOperation__Array>(get_class(), size);
        }
        inline app::SaveSlotsUI_StorageOperation__Array* create_array(const std::vector<app::SaveSlotsUI_StorageOperation*>& items) {
            return il2cpp::array_new<app::SaveSlotsUI_StorageOperation__Array>(get_class(), items);
        }
    } // namespace SaveSlotsUI_StorageOperation
} // namespace app::classes::types
