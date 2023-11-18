#pragma once
#include <Modloader/app/structs/DeleteFilesRequest.h>
#include <Modloader/app/structs/DeleteFilesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteFilesRequest {
        inline app::DeleteFilesRequest__Class** type_info() {
            static app::DeleteFilesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteFilesRequest__Class**)(modloader::win::memory::resolve_rva(0x04772C98));
            }
            return cache;
        }
        inline app::DeleteFilesRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteFilesRequest__Class>(type_info(), "PlayFab.DataModels", "DeleteFilesRequest");
        }
        inline app::DeleteFilesRequest* create() {
            return il2cpp::create_object<app::DeleteFilesRequest>(get_class());
        }
    } // namespace DeleteFilesRequest
} // namespace app::classes::types
