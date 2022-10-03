#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Type2Message {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Type2Message__Class** type_info;
        inline app::Type2Message__Class* get_class() {
            return il2cpp::get_class<app::Type2Message__Class>(type_info, "Mono.Security.Protocol.Ntlm", "Type2Message");
        }
        inline app::Type2Message* create() {
            return il2cpp::create_object<app::Type2Message>(get_class());
        }
    } // namespace Type2Message
} // namespace app::classes::types
