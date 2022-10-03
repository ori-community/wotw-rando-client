#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Type3Message {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Type3Message__Class** type_info;
        inline app::Type3Message__Class* get_class() {
            return il2cpp::get_class<app::Type3Message__Class>(type_info, "Mono.Security.Protocol.Ntlm", "Type3Message");
        }
        inline app::Type3Message* create() {
            return il2cpp::create_object<app::Type3Message>(get_class());
        }
    } // namespace Type3Message
} // namespace app::classes::types
