#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAutoWebProxy {
        inline app::IAutoWebProxy__Class** type_info = (app::IAutoWebProxy__Class**)(modloader::win::memory::resolve_rva(0x0473F800));
        inline app::IAutoWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IAutoWebProxy__Class>(type_info, "System.Net", "IAutoWebProxy");
        }
    } // namespace IAutoWebProxy
} // namespace app::classes::types
