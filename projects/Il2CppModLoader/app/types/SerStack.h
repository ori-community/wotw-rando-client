#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerStack {
        inline app::SerStack__Class** type_info = (app::SerStack__Class**)(modloader::win::memory::resolve_rva(0x0477BB10));
        inline app::SerStack__Class* get_class() {
            return il2cpp::get_class<app::SerStack__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
        }
        inline app::SerStack* create() {
            return il2cpp::create_object<app::SerStack>(get_class());
        }
    } // namespace SerStack
} // namespace app::classes::types
