#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InAttribute {
        inline app::InAttribute__Class** type_info = (app::InAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472F280));
        inline app::InAttribute__Class* get_class() {
            return il2cpp::get_class<app::InAttribute__Class>(type_info, "System.Runtime.InteropServices", "InAttribute");
        }
        inline app::InAttribute* create() {
            return il2cpp::create_object<app::InAttribute>(get_class());
        }
    } // namespace InAttribute
} // namespace app::classes::types
