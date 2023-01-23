#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpdateAvatarUrlRequest_1__Class.h>
#include <Modloader/app/structs/UpdateAvatarUrlRequest_1.h>

namespace app::classes::types {
    namespace UpdateAvatarUrlRequest_1 {
        inline app::UpdateAvatarUrlRequest_1__Class** type_info = (app::UpdateAvatarUrlRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0476A0F8));
        inline app::UpdateAvatarUrlRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateAvatarUrlRequest_1__Class>(type_info, "PlayFab.ServerModels", "UpdateAvatarUrlRequest");
        }
        inline app::UpdateAvatarUrlRequest_1* create() {
            return il2cpp::create_object<app::UpdateAvatarUrlRequest_1>(get_class());
        }
    } // namespace UpdateAvatarUrlRequest_1
} // namespace app::classes::types
