#pragma once
#include <Modloader/app/structs/NtlmFlags__Enum.h>
#include <Modloader/app/structs/NtlmFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NtlmFlags__Enum {
        inline app::NtlmFlags__Enum__Class** type_info() {
            static app::NtlmFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NtlmFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NtlmFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::NtlmFlags__Enum__Class>(type_info(), "Mono.Security.Protocol.Ntlm", "NtlmFlags");
        }
        inline app::NtlmFlags__Enum* create() {
            return il2cpp::create_object<app::NtlmFlags__Enum>(get_class());
        }
    } // namespace NtlmFlags__Enum
} // namespace app::classes::types
