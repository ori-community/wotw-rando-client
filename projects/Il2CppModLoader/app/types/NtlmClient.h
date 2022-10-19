#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NtlmClient {
        inline app::NtlmClient__Class** type_info = (app::NtlmClient__Class**)(modloader::win::memory::resolve_rva(0x047675C0));
        inline app::NtlmClient__Class* get_class() {
            return il2cpp::get_class<app::NtlmClient__Class>(type_info, "Mono.Http", "NtlmClient");
        }
        inline app::NtlmClient* create() {
            return il2cpp::create_object<app::NtlmClient>(get_class());
        }
    } // namespace NtlmClient
} // namespace app::classes::types
