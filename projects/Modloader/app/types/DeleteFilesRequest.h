#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteFilesRequest {
        inline app::DeleteFilesRequest__Class** type_info = (app::DeleteFilesRequest__Class**)(modloader::win::memory::resolve_rva(0x04772C98));
        inline app::DeleteFilesRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteFilesRequest__Class>(type_info, "PlayFab.DataModels", "DeleteFilesRequest");
        }
        inline app::DeleteFilesRequest* create() {
            return il2cpp::create_object<app::DeleteFilesRequest>(get_class());
        }
    } // namespace DeleteFilesRequest
} // namespace app::classes::types
