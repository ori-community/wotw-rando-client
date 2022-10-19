#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemotingSurrogateSelector {
        inline app::RemotingSurrogateSelector__Class** type_info = (app::RemotingSurrogateSelector__Class**)(modloader::win::memory::resolve_rva(0x0475B840));
        inline app::RemotingSurrogateSelector__Class* get_class() {
            return il2cpp::get_class<app::RemotingSurrogateSelector__Class>(type_info, "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
        }
        inline app::RemotingSurrogateSelector* create() {
            return il2cpp::create_object<app::RemotingSurrogateSelector>(get_class());
        }
    } // namespace RemotingSurrogateSelector
} // namespace app::classes::types
