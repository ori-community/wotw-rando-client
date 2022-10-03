#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NtlmFlags__Enum {
        namespace {
            app::NtlmFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::NtlmFlags__Enum__Class** type_info = &type_info_ref;
        inline app::NtlmFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::NtlmFlags__Enum__Class>(type_info, "Mono.Security.Protocol.Ntlm", "NtlmFlags");
        }
        inline app::NtlmFlags__Enum* create() {
            return il2cpp::create_object<app::NtlmFlags__Enum>(get_class());
        }
    } // namespace NtlmFlags__Enum
} // namespace app::classes::types
