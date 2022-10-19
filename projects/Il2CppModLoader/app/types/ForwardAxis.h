#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForwardAxis {
        inline app::ForwardAxis__Class** type_info = (app::ForwardAxis__Class**)(modloader::win::memory::resolve_rva(0x04793FC0));
        inline app::ForwardAxis__Class* get_class() {
            return il2cpp::get_class<app::ForwardAxis__Class>(type_info, "System.Xml.Schema", "ForwardAxis");
        }
        inline app::ForwardAxis* create() {
            return il2cpp::create_object<app::ForwardAxis>(get_class());
        }
    } // namespace ForwardAxis
} // namespace app::classes::types
