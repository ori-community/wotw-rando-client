#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NtlmSettings__Class.h>
#include <Modloader/app/structs/NtlmSettings.h>

namespace app::classes::types {
    namespace NtlmSettings {
        inline app::NtlmSettings__Class** type_info = (app::NtlmSettings__Class**)(modloader::win::memory::resolve_rva(0x04746D88));
        inline app::NtlmSettings__Class* get_class() {
            return il2cpp::get_class<app::NtlmSettings__Class>(type_info, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
        }
        inline app::NtlmSettings* create() {
            return il2cpp::create_object<app::NtlmSettings>(get_class());
        }
    } // namespace NtlmSettings
} // namespace app::classes::types
