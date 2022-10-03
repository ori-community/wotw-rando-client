#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncReadRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncReadRequest__Class** type_info;
        inline app::AsyncReadRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncReadRequest__Class>(type_info, "Mono.Net.Security", "AsyncReadRequest");
        }
        inline app::AsyncReadRequest* create() {
            return il2cpp::create_object<app::AsyncReadRequest>(get_class());
        }
    } // namespace AsyncReadRequest
} // namespace app::classes::types
