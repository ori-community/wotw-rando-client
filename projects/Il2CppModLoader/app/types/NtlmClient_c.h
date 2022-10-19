#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NtlmClient_c {
        inline app::NtlmClient_c__Class** type_info = (app::NtlmClient_c__Class**)(modloader::win::memory::resolve_rva(0x0476B308));
        inline app::NtlmClient_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NtlmClient_c__Class>(type_info, "Mono.Http", "NtlmClient", "<>c");
        }
        inline app::NtlmClient_c* create() {
            return il2cpp::create_object<app::NtlmClient_c>(get_class());
        }
    } // namespace NtlmClient_c
} // namespace app::classes::types
