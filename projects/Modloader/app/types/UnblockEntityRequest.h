#pragma once
#include <Modloader/app/structs/UnblockEntityRequest.h>
#include <Modloader/app/structs/UnblockEntityRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnblockEntityRequest {
        inline app::UnblockEntityRequest__Class** type_info() {
            static app::UnblockEntityRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnblockEntityRequest__Class**)(modloader::win::memory::resolve_rva(0x04721C80));
            }
            return cache;
        }
        inline app::UnblockEntityRequest__Class* get_class() {
            return il2cpp::get_class<app::UnblockEntityRequest__Class>(type_info(), "PlayFab.GroupsModels", "UnblockEntityRequest");
        }
        inline app::UnblockEntityRequest* create() {
            return il2cpp::create_object<app::UnblockEntityRequest>(get_class());
        }
    } // namespace UnblockEntityRequest
} // namespace app::classes::types
