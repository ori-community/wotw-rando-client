#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IConstructionCallMessage {
        inline app::IConstructionCallMessage__Class** type_info = (app::IConstructionCallMessage__Class**)(modloader::win::memory::resolve_rva(0x04768B18));
        inline app::IConstructionCallMessage__Class* get_class() {
            return il2cpp::get_class<app::IConstructionCallMessage__Class>(type_info, "System.Runtime.Remoting.Activation", "IConstructionCallMessage");
        }
    } // namespace IConstructionCallMessage
} // namespace app::classes::types
