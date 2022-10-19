#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowsableAttribute {
        inline app::BrowsableAttribute__Class** type_info = (app::BrowsableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04760290));
        inline app::BrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::BrowsableAttribute__Class>(type_info, "System.ComponentModel", "BrowsableAttribute");
        }
        inline app::BrowsableAttribute* create() {
            return il2cpp::create_object<app::BrowsableAttribute>(get_class());
        }
    } // namespace BrowsableAttribute
} // namespace app::classes::types
