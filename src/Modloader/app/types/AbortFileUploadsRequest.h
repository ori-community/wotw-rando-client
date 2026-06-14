#pragma once
#include <Modloader/app/structs/AbortFileUploadsRequest.h>
#include <Modloader/app/structs/AbortFileUploadsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbortFileUploadsRequest {
        inline app::AbortFileUploadsRequest__Class** type_info() {
            static app::AbortFileUploadsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbortFileUploadsRequest__Class**)(modloader::win::memory::resolve_rva(0x04733BF8));
            }
            return cache;
        }
        inline app::AbortFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::AbortFileUploadsRequest__Class>(type_info(), "PlayFab.DataModels", "AbortFileUploadsRequest");
        }
        inline app::AbortFileUploadsRequest* create() {
            return il2cpp::create_object<app::AbortFileUploadsRequest>(get_class());
        }
    } // namespace AbortFileUploadsRequest
} // namespace app::classes::types
