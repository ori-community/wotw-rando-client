#pragma once
#include <Modloader/app/structs/NtlmAuthLevel__Enum.h>
#include <Modloader/app/structs/NtlmAuthLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NtlmAuthLevel__Enum {
        inline app::NtlmAuthLevel__Enum__Class** type_info() {
            static app::NtlmAuthLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NtlmAuthLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NtlmAuthLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::NtlmAuthLevel__Enum__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "NtlmAuthLevel");
        }
        inline app::NtlmAuthLevel__Enum* create() {
            return il2cpp::create_object<app::NtlmAuthLevel__Enum>(get_class());
        }
    } // namespace NtlmAuthLevel__Enum
} // namespace app::classes::types
