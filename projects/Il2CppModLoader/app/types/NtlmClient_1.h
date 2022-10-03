#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NtlmClient_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NtlmClient_1__Class** type_info;
        inline app::NtlmClient_1__Class* get_class() {
            return il2cpp::get_class<app::NtlmClient_1__Class>(type_info, "System.Net", "NtlmClient");
        }
        inline app::NtlmClient_1* create() {
            return il2cpp::create_object<app::NtlmClient_1>(get_class());
        }
    } // namespace NtlmClient_1
} // namespace app::classes::types
