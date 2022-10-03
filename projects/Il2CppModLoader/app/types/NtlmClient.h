#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NtlmClient {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NtlmClient__Class** type_info;
        inline app::NtlmClient__Class* get_class() {
            return il2cpp::get_class<app::NtlmClient__Class>(type_info, "Mono.Http", "NtlmClient");
        }
        inline app::NtlmClient* create() {
            return il2cpp::create_object<app::NtlmClient>(get_class());
        }
    } // namespace NtlmClient
} // namespace app::classes::types
