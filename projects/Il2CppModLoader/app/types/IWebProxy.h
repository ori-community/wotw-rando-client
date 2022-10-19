#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWebProxy {
        inline app::IWebProxy__Class** type_info = (app::IWebProxy__Class**)(modloader::win::memory::resolve_rva(0x0470EE08));
        inline app::IWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IWebProxy__Class>(type_info, "System.Net", "IWebProxy");
        }
    } // namespace IWebProxy
} // namespace app::classes::types
