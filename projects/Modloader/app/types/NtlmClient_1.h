#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NtlmClient_1 {
        inline app::NtlmClient_1__Class** type_info = (app::NtlmClient_1__Class**)(modloader::win::memory::resolve_rva(0x0470DEC0));
        inline app::NtlmClient_1__Class* get_class() {
            return il2cpp::get_class<app::NtlmClient_1__Class>(type_info, "System.Net", "NtlmClient");
        }
        inline app::NtlmClient_1* create() {
            return il2cpp::create_object<app::NtlmClient_1>(get_class());
        }
    } // namespace NtlmClient_1
} // namespace app::classes::types
