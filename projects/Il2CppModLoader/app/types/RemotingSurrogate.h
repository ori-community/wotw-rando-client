#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemotingSurrogate {
        inline app::RemotingSurrogate__Class** type_info = (app::RemotingSurrogate__Class**)(modloader::win::memory::resolve_rva(0x047338D0));
        inline app::RemotingSurrogate__Class* get_class() {
            return il2cpp::get_class<app::RemotingSurrogate__Class>(type_info, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
        }
        inline app::RemotingSurrogate* create() {
            return il2cpp::create_object<app::RemotingSurrogate>(get_class());
        }
    } // namespace RemotingSurrogate
} // namespace app::classes::types
