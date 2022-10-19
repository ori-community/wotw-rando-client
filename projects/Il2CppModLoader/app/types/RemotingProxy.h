#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemotingProxy {
        inline app::RemotingProxy__Class** type_info = (app::RemotingProxy__Class**)(modloader::win::memory::resolve_rva(0x04781FD0));
        inline app::RemotingProxy__Class* get_class() {
            return il2cpp::get_class<app::RemotingProxy__Class>(type_info, "System.Runtime.Remoting.Proxies", "RemotingProxy");
        }
        inline app::RemotingProxy* create() {
            return il2cpp::create_object<app::RemotingProxy>(get_class());
        }
    } // namespace RemotingProxy
} // namespace app::classes::types
