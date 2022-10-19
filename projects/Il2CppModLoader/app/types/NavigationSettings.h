#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NavigationSettings {
        inline app::NavigationSettings__Class** type_info = (app::NavigationSettings__Class**)(modloader::win::memory::resolve_rva(0x0471F438));
        inline app::NavigationSettings__Class* get_class() {
            return il2cpp::get_class<app::NavigationSettings__Class>(type_info, "", "NavigationSettings");
        }
        inline app::NavigationSettings* create() {
            return il2cpp::create_object<app::NavigationSettings>(get_class());
        }
    } // namespace NavigationSettings
} // namespace app::classes::types
