#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalBrowserWrapper {
        inline app::XalBrowserWrapper__Class** type_info = (app::XalBrowserWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472DB18));
        inline app::XalBrowserWrapper__Class* get_class() {
            return il2cpp::get_class<app::XalBrowserWrapper__Class>(type_info, "SystemIntegration", "XalBrowserWrapper");
        }
        inline app::XalBrowserWrapper* create() {
            return il2cpp::create_object<app::XalBrowserWrapper>(get_class());
        }
    } // namespace XalBrowserWrapper
} // namespace app::classes::types
