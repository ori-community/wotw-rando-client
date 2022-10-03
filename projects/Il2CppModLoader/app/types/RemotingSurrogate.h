#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemotingSurrogate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemotingSurrogate__Class** type_info;
        inline app::RemotingSurrogate__Class* get_class() {
            return il2cpp::get_class<app::RemotingSurrogate__Class>(type_info, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
        }
        inline app::RemotingSurrogate* create() {
            return il2cpp::create_object<app::RemotingSurrogate>(get_class());
        }
    } // namespace RemotingSurrogate
} // namespace app::classes::types
