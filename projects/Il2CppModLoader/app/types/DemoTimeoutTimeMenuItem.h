#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoTimeoutTimeMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DemoTimeoutTimeMenuItem__Class** type_info;
        inline app::DemoTimeoutTimeMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DemoTimeoutTimeMenuItem__Class>(type_info, "", "DemoTimeoutTimeMenuItem");
        }
        inline app::DemoTimeoutTimeMenuItem* create() {
            return il2cpp::create_object<app::DemoTimeoutTimeMenuItem>(get_class());
        }
    } // namespace DemoTimeoutTimeMenuItem
} // namespace app::classes::types
