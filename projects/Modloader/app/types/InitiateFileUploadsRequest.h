#pragma once
#include <Modloader/app/structs/InitiateFileUploadsRequest.h>
#include <Modloader/app/structs/InitiateFileUploadsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitiateFileUploadsRequest {
        inline app::InitiateFileUploadsRequest__Class** type_info() {
            static app::InitiateFileUploadsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitiateFileUploadsRequest__Class**)(modloader::win::memory::resolve_rva(0x047116B8));
            }
            return cache;
        }
        inline app::InitiateFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadsRequest__Class>(type_info(), "PlayFab.DataModels", "InitiateFileUploadsRequest");
        }
        inline app::InitiateFileUploadsRequest* create() {
            return il2cpp::create_object<app::InitiateFileUploadsRequest>(get_class());
        }
    } // namespace InitiateFileUploadsRequest
} // namespace app::classes::types
