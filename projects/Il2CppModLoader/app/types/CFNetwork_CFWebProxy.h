#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFNetwork_CFWebProxy {
        inline app::CFNetwork_CFWebProxy__Class** type_info = (app::CFNetwork_CFWebProxy__Class**)(modloader::win::memory::resolve_rva(0x0472E1E8));
        inline app::CFNetwork_CFWebProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::CFNetwork_CFWebProxy__Class>(type_info, "Mono.Net", "CFNetwork", "CFWebProxy");
        }
        inline app::CFNetwork_CFWebProxy* create() {
            return il2cpp::create_object<app::CFNetwork_CFWebProxy>(get_class());
        }
    } // namespace CFNetwork_CFWebProxy
} // namespace app::classes::types
