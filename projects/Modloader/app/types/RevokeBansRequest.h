#pragma once
#include <Modloader/app/structs/RevokeBansRequest.h>
#include <Modloader/app/structs/RevokeBansRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RevokeBansRequest {
        inline app::RevokeBansRequest__Class** type_info() {
            static app::RevokeBansRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RevokeBansRequest__Class**)(modloader::win::memory::resolve_rva(0x047393C8));
            }
            return cache;
        }
        inline app::RevokeBansRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeBansRequest__Class>(type_info(), "PlayFab.ServerModels", "RevokeBansRequest");
        }
        inline app::RevokeBansRequest* create() {
            return il2cpp::create_object<app::RevokeBansRequest>(get_class());
        }
    } // namespace RevokeBansRequest
} // namespace app::classes::types
