#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Type1Message {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Type1Message__Class** type_info;
        inline app::Type1Message__Class* get_class() {
            return il2cpp::get_class<app::Type1Message__Class>(type_info, "Mono.Security.Protocol.Ntlm", "Type1Message");
        }
        inline app::Type1Message* create() {
            return il2cpp::create_object<app::Type1Message>(get_class());
        }
    } // namespace Type1Message
} // namespace app::classes::types
