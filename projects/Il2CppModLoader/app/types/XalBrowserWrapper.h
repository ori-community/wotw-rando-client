#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalBrowserWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalBrowserWrapper__Class** type_info;
        inline app::XalBrowserWrapper__Class* get_class() {
            return il2cpp::get_class<app::XalBrowserWrapper__Class>(type_info, "SystemIntegration", "XalBrowserWrapper");
        }
        inline app::XalBrowserWrapper* create() {
            return il2cpp::create_object<app::XalBrowserWrapper>(get_class());
        }
    } // namespace XalBrowserWrapper
} // namespace app::classes::types
