#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSASslSignatureFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSASslSignatureFormatter__Class** type_info;
        inline app::RSASslSignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSASslSignatureFormatter__Class>(type_info, "Mono.Security.Protocol.Tls", "RSASslSignatureFormatter");
        }
        inline app::RSASslSignatureFormatter* create() {
            return il2cpp::create_object<app::RSASslSignatureFormatter>(get_class());
        }
    } // namespace RSASslSignatureFormatter
} // namespace app::classes::types
