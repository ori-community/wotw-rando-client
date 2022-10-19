#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebProxy {
        inline app::WebProxy__Class** type_info = (app::WebProxy__Class**)(modloader::win::memory::resolve_rva(0x04729180));
        inline app::WebProxy__Class* get_class() {
            return il2cpp::get_class<app::WebProxy__Class>(type_info, "System.Net", "WebProxy");
        }
        inline app::WebProxy* create() {
            return il2cpp::create_object<app::WebProxy>(get_class());
        }
    } // namespace WebProxy
} // namespace app::classes::types
