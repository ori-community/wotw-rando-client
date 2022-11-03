#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetRandomResultTablesResult {
        inline app::GetRandomResultTablesResult__Class** type_info = (app::GetRandomResultTablesResult__Class**)(modloader::win::memory::resolve_rva(0x04722768));
        inline app::GetRandomResultTablesResult__Class* get_class() {
            return il2cpp::get_class<app::GetRandomResultTablesResult__Class>(type_info, "PlayFab.ServerModels", "GetRandomResultTablesResult");
        }
        inline app::GetRandomResultTablesResult* create() {
            return il2cpp::create_object<app::GetRandomResultTablesResult>(get_class());
        }
    } // namespace GetRandomResultTablesResult
} // namespace app::classes::types
