#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Platform {
        inline app::Platform__Class** type_info = (app::Platform__Class**)(modloader::win::memory::resolve_rva(0x0472A6C8));
        inline app::Platform__Class* get_class() {
            return il2cpp::get_class<app::Platform__Class>(type_info, "System", "Platform");
        }
        inline app::Platform* create() {
            return il2cpp::create_object<app::Platform>(get_class());
        }
    } // namespace Platform
} // namespace app::classes::types
