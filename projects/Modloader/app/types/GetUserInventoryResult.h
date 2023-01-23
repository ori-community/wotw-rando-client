#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetUserInventoryResult__Class.h>
#include <Modloader/app/structs/GetUserInventoryResult.h>

namespace app::classes::types {
    namespace GetUserInventoryResult {
        inline app::GetUserInventoryResult__Class** type_info = (app::GetUserInventoryResult__Class**)(modloader::win::memory::resolve_rva(0x0474EC00));
        inline app::GetUserInventoryResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryResult__Class>(type_info, "PlayFab.ClientModels", "GetUserInventoryResult");
        }
        inline app::GetUserInventoryResult* create() {
            return il2cpp::create_object<app::GetUserInventoryResult>(get_class());
        }
    } // namespace GetUserInventoryResult
} // namespace app::classes::types
