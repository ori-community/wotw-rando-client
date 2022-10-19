#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IConstructionReturnMessage {
        inline app::IConstructionReturnMessage__Class** type_info = (app::IConstructionReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x0477A2B8));
        inline app::IConstructionReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IConstructionReturnMessage__Class>(type_info, "System.Runtime.Remoting.Activation", "IConstructionReturnMessage");
        }
    } // namespace IConstructionReturnMessage
} // namespace app::classes::types
