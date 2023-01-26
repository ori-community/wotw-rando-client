#pragma once
#include <Modloader/app/structs/IsMemberRequest.h>
#include <Modloader/app/structs/IsMemberRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsMemberRequest {
        inline app::IsMemberRequest__Class** type_info() {
            static app::IsMemberRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IsMemberRequest__Class**)(modloader::win::memory::resolve_rva(0x04732518));
            }
            return cache;
        }
        inline app::IsMemberRequest__Class* get_class() {
            return il2cpp::get_class<app::IsMemberRequest__Class>(type_info(), "PlayFab.GroupsModels", "IsMemberRequest");
        }
        inline app::IsMemberRequest* create() {
            return il2cpp::create_object<app::IsMemberRequest>(get_class());
        }
    } // namespace IsMemberRequest
} // namespace app::classes::types
