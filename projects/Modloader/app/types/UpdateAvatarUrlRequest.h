#pragma once
#include <Modloader/app/structs/UpdateAvatarUrlRequest.h>
#include <Modloader/app/structs/UpdateAvatarUrlRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateAvatarUrlRequest {
        inline app::UpdateAvatarUrlRequest__Class** type_info() {
            static app::UpdateAvatarUrlRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateAvatarUrlRequest__Class**)(modloader::win::memory::resolve_rva(0x04765B70));
            }
            return cache;
        }
        inline app::UpdateAvatarUrlRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateAvatarUrlRequest__Class>(type_info(), "PlayFab.ClientModels", "UpdateAvatarUrlRequest");
        }
        inline app::UpdateAvatarUrlRequest* create() {
            return il2cpp::create_object<app::UpdateAvatarUrlRequest>(get_class());
        }
    } // namespace UpdateAvatarUrlRequest
} // namespace app::classes::types
