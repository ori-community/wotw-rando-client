#pragma once
#include <Modloader/app/structs/ListQosServersRequest.h>
#include <Modloader/app/structs/ListQosServersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListQosServersRequest {
        inline app::ListQosServersRequest__Class** type_info() {
            static app::ListQosServersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListQosServersRequest__Class**)(modloader::win::memory::resolve_rva(0x0476DC48));
            }
            return cache;
        }
        inline app::ListQosServersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListQosServersRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListQosServersRequest");
        }
        inline app::ListQosServersRequest* create() {
            return il2cpp::create_object<app::ListQosServersRequest>(get_class());
        }
    } // namespace ListQosServersRequest
} // namespace app::classes::types
