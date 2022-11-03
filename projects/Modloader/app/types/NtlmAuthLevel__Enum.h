#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NtlmAuthLevel__Enum {
        namespace {
            inline app::NtlmAuthLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NtlmAuthLevel__Enum__Class** type_info = &type_info_ref;
        inline app::NtlmAuthLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::NtlmAuthLevel__Enum__Class>(type_info, "Mono.Security.Protocol.Ntlm", "NtlmAuthLevel");
        }
        inline app::NtlmAuthLevel__Enum* create() {
            return il2cpp::create_object<app::NtlmAuthLevel__Enum>(get_class());
        }
    } // namespace NtlmAuthLevel__Enum
} // namespace app::classes::types
