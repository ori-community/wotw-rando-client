#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DemoTimeoutTimeMenuItem {
        inline app::DemoTimeoutTimeMenuItem__Class** type_info = (app::DemoTimeoutTimeMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04772FE8));
        inline app::DemoTimeoutTimeMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DemoTimeoutTimeMenuItem__Class>(type_info, "", "DemoTimeoutTimeMenuItem");
        }
        inline app::DemoTimeoutTimeMenuItem* create() {
            return il2cpp::create_object<app::DemoTimeoutTimeMenuItem>(get_class());
        }
    } // namespace DemoTimeoutTimeMenuItem
} // namespace app::classes::types
