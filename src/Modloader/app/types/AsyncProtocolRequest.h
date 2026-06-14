#pragma once
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#include <Modloader/app/structs/AsyncProtocolRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncProtocolRequest {
        inline app::AsyncProtocolRequest__Class** type_info() {
            static app::AsyncProtocolRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncProtocolRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncProtocolRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncProtocolRequest__Class>(type_info(), "Mono.Net.Security", "AsyncProtocolRequest");
        }
        inline app::AsyncProtocolRequest* create() {
            return il2cpp::create_object<app::AsyncProtocolRequest>(get_class());
        }
    } // namespace AsyncProtocolRequest
} // namespace app::classes::types
