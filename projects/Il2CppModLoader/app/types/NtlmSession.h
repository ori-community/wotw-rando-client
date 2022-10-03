#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NtlmSession {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NtlmSession__Class** type_info;
        inline app::NtlmSession__Class* get_class() {
            return il2cpp::get_class<app::NtlmSession__Class>(type_info, "Mono.Http", "NtlmSession");
        }
        inline app::NtlmSession* create() {
            return il2cpp::create_object<app::NtlmSession>(get_class());
        }
    } // namespace NtlmSession
} // namespace app::classes::types
