#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSTestFields_Scope__Enum {
        inline app::FPSTestFields_Scope__Enum__Class** type_info = (app::FPSTestFields_Scope__Enum__Class**)(modloader::win::memory::resolve_rva(0x04751800));
        inline app::FPSTestFields_Scope__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSTestFields_Scope__Enum__Class>(type_info, "", "FPSTestFields", "Scope");
        }
        inline app::FPSTestFields_Scope__Enum* create() {
            return il2cpp::create_object<app::FPSTestFields_Scope__Enum>(get_class());
        }
    } // namespace FPSTestFields_Scope__Enum
} // namespace app::classes::types
