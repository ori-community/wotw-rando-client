#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMessage {
        inline app::IMessage__Class** type_info = (app::IMessage__Class**)(modloader::win::memory::resolve_rva(0x0476B180));
        inline app::IMessage__Class* get_class() {
            return il2cpp::get_class<app::IMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMessage");
        }
    } // namespace IMessage
} // namespace app::classes::types
