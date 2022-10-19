#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutAttribute {
        inline app::OutAttribute__Class** type_info = (app::OutAttribute__Class**)(modloader::win::memory::resolve_rva(0x04795CC8));
        inline app::OutAttribute__Class* get_class() {
            return il2cpp::get_class<app::OutAttribute__Class>(type_info, "System.Runtime.InteropServices", "OutAttribute");
        }
        inline app::OutAttribute* create() {
            return il2cpp::create_object<app::OutAttribute>(get_class());
        }
    } // namespace OutAttribute
} // namespace app::classes::types
