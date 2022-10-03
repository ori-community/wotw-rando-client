#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncWriteRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncWriteRequest__Class** type_info;
        inline app::AsyncWriteRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncWriteRequest__Class>(type_info, "Mono.Net.Security", "AsyncWriteRequest");
        }
        inline app::AsyncWriteRequest* create() {
            return il2cpp::create_object<app::AsyncWriteRequest>(get_class());
        }
    } // namespace AsyncWriteRequest
} // namespace app::classes::types
