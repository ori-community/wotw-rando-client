#pragma once
#include <Modloader/app/structs/FinalizeFileUploadsRequest.h>
#include <Modloader/app/structs/FinalizeFileUploadsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FinalizeFileUploadsRequest {
        inline app::FinalizeFileUploadsRequest__Class** type_info() {
            static app::FinalizeFileUploadsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FinalizeFileUploadsRequest__Class**)(modloader::win::memory::resolve_rva(0x04715E18));
            }
            return cache;
        }
        inline app::FinalizeFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::FinalizeFileUploadsRequest__Class>(type_info(), "PlayFab.DataModels", "FinalizeFileUploadsRequest");
        }
        inline app::FinalizeFileUploadsRequest* create() {
            return il2cpp::create_object<app::FinalizeFileUploadsRequest>(get_class());
        }
    } // namespace FinalizeFileUploadsRequest
} // namespace app::classes::types
