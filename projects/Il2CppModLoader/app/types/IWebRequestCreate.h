#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWebRequestCreate {
        inline app::IWebRequestCreate__Class** type_info = (app::IWebRequestCreate__Class**)(modloader::win::memory::resolve_rva(0x0473AC28));
        inline app::IWebRequestCreate__Class* get_class() {
            return il2cpp::get_class<app::IWebRequestCreate__Class>(type_info, "System.Net", "IWebRequestCreate");
        }
    } // namespace IWebRequestCreate
} // namespace app::classes::types
