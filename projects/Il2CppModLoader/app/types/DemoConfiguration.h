#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DemoConfiguration__Class** type_info;
        inline app::DemoConfiguration__Class* get_class() {
            return il2cpp::get_class<app::DemoConfiguration__Class>(type_info, "", "DemoConfiguration");
        }
        inline app::DemoConfiguration* create() {
            return il2cpp::create_object<app::DemoConfiguration>(get_class());
        }
    } // namespace DemoConfiguration
} // namespace app::classes::types
