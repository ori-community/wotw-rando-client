#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NtlmSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NtlmSettings__Class** type_info;
        inline app::NtlmSettings__Class* get_class() {
            return il2cpp::get_class<app::NtlmSettings__Class>(type_info, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
        }
        inline app::NtlmSettings* create() {
            return il2cpp::create_object<app::NtlmSettings>(get_class());
        }
    } // namespace NtlmSettings
} // namespace app::classes::types
