#pragma once
#include <Modloader/app/structs/AbortFileUploadsResponse.h>
#include <Modloader/app/structs/AbortFileUploadsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbortFileUploadsResponse {
        inline app::AbortFileUploadsResponse__Class** type_info() {
            static app::AbortFileUploadsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbortFileUploadsResponse__Class**)(modloader::win::memory::resolve_rva(0x04730E60));
            }
            return cache;
        }
        inline app::AbortFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::AbortFileUploadsResponse__Class>(type_info(), "PlayFab.DataModels", "AbortFileUploadsResponse");
        }
        inline app::AbortFileUploadsResponse* create() {
            return il2cpp::create_object<app::AbortFileUploadsResponse>(get_class());
        }
    } // namespace AbortFileUploadsResponse
} // namespace app::classes::types
