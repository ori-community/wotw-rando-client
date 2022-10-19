#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContainer {
        inline app::IContainer__Class** type_info = (app::IContainer__Class**)(modloader::win::memory::resolve_rva(0x04708590));
        inline app::IContainer__Class* get_class() {
            return il2cpp::get_class<app::IContainer__Class>(type_info, "System.ComponentModel", "IContainer");
        }
    } // namespace IContainer
} // namespace app::classes::types
