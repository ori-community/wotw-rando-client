#pragma once
#include <Modloader/app/structs/AcceptGroupApplicationRequest.h>
#include <Modloader/app/structs/AcceptGroupApplicationRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcceptGroupApplicationRequest {
        inline app::AcceptGroupApplicationRequest__Class** type_info() {
            static app::AcceptGroupApplicationRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcceptGroupApplicationRequest__Class**)(modloader::win::memory::resolve_rva(0x04757FF0));
            }
            return cache;
        }
        inline app::AcceptGroupApplicationRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptGroupApplicationRequest__Class>(type_info(), "PlayFab.GroupsModels", "AcceptGroupApplicationRequest");
        }
        inline app::AcceptGroupApplicationRequest* create() {
            return il2cpp::create_object<app::AcceptGroupApplicationRequest>(get_class());
        }
    } // namespace AcceptGroupApplicationRequest
} // namespace app::classes::types
