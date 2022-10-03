#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncRequest__Class** type_info;
        inline app::AsyncRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncRequest__Class>(type_info, "System.Runtime.Remoting.Channels", "AsyncRequest");
        }
        inline app::AsyncRequest* create() {
            return il2cpp::create_object<app::AsyncRequest>(get_class());
        }
    } // namespace AsyncRequest
} // namespace app::classes::types
