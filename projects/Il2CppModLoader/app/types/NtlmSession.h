#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NtlmSession {
        inline app::NtlmSession__Class** type_info = (app::NtlmSession__Class**)(modloader::win::memory::resolve_rva(0x0478E0C0));
        inline app::NtlmSession__Class* get_class() {
            return il2cpp::get_class<app::NtlmSession__Class>(type_info, "Mono.Http", "NtlmSession");
        }
        inline app::NtlmSession* create() {
            return il2cpp::create_object<app::NtlmSession>(get_class());
        }
    } // namespace NtlmSession
} // namespace app::classes::types
