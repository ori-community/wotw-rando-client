#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncProtocolRequest {
        namespace {
            app::AsyncProtocolRequest__Class* type_info_ref = nullptr;
        }
        app::AsyncProtocolRequest__Class** type_info = &type_info_ref;
        inline app::AsyncProtocolRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncProtocolRequest__Class>(type_info, "Mono.Net.Security", "AsyncProtocolRequest");
        }
        inline app::AsyncProtocolRequest* create() {
            return il2cpp::create_object<app::AsyncProtocolRequest>(get_class());
        }
    } // namespace AsyncProtocolRequest
} // namespace app::classes::types
