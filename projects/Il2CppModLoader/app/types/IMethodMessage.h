#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMethodMessage {
        inline app::IMethodMessage__Class** type_info = (app::IMethodMessage__Class**)(modloader::win::memory::resolve_rva(0x0477D2B8));
        inline app::IMethodMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodMessage");
        }
    } // namespace IMethodMessage
} // namespace app::classes::types
