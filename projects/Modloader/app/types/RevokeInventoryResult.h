#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RevokeInventoryResult__Class.h>
#include <Modloader/app/structs/RevokeInventoryResult.h>

namespace app::classes::types {
    namespace RevokeInventoryResult {
        inline app::RevokeInventoryResult__Class** type_info = (app::RevokeInventoryResult__Class**)(modloader::win::memory::resolve_rva(0x0473D720));
        inline app::RevokeInventoryResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryResult__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryResult");
        }
        inline app::RevokeInventoryResult* create() {
            return il2cpp::create_object<app::RevokeInventoryResult>(get_class());
        }
    } // namespace RevokeInventoryResult
} // namespace app::classes::types
