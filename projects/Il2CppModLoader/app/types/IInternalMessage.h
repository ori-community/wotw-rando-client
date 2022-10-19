#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInternalMessage {
        inline app::IInternalMessage__Class** type_info = (app::IInternalMessage__Class**)(modloader::win::memory::resolve_rva(0x047679A0));
        inline app::IInternalMessage__Class* get_class() {
            return il2cpp::get_class<app::IInternalMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IInternalMessage");
        }
    } // namespace IInternalMessage
} // namespace app::classes::types
