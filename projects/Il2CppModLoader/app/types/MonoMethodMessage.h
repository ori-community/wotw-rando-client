#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoMethodMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoMethodMessage__Class** type_info;
        inline app::MonoMethodMessage__Class* get_class() {
            return il2cpp::get_class<app::MonoMethodMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "MonoMethodMessage");
        }
        inline app::MonoMethodMessage* create() {
            return il2cpp::create_object<app::MonoMethodMessage>(get_class());
        }
    } // namespace MonoMethodMessage
} // namespace app::classes::types
