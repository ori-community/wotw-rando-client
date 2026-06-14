#pragma once
#include <Modloader/app/structs/DeleteFilesResponse.h>
#include <Modloader/app/structs/DeleteFilesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteFilesResponse {
        inline app::DeleteFilesResponse__Class** type_info() {
            static app::DeleteFilesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteFilesResponse__Class**)(modloader::win::memory::resolve_rva(0x04775B80));
            }
            return cache;
        }
        inline app::DeleteFilesResponse__Class* get_class() {
            return il2cpp::get_class<app::DeleteFilesResponse__Class>(type_info(), "PlayFab.DataModels", "DeleteFilesResponse");
        }
        inline app::DeleteFilesResponse* create() {
            return il2cpp::create_object<app::DeleteFilesResponse>(get_class());
        }
    } // namespace DeleteFilesResponse
} // namespace app::classes::types
