#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetRandomResultTablesRequest__Class.h>
#include <Modloader/app/structs/GetRandomResultTablesRequest.h>

namespace app::classes::types {
    namespace GetRandomResultTablesRequest {
        inline app::GetRandomResultTablesRequest__Class** type_info = (app::GetRandomResultTablesRequest__Class**)(modloader::win::memory::resolve_rva(0x0475D3E8));
        inline app::GetRandomResultTablesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetRandomResultTablesRequest__Class>(type_info, "PlayFab.ServerModels", "GetRandomResultTablesRequest");
        }
        inline app::GetRandomResultTablesRequest* create() {
            return il2cpp::create_object<app::GetRandomResultTablesRequest>(get_class());
        }
    } // namespace GetRandomResultTablesRequest
} // namespace app::classes::types
