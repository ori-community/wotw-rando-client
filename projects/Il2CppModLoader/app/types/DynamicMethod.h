#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicMethod {
        inline app::DynamicMethod__Class** type_info = (app::DynamicMethod__Class**)(modloader::win::memory::resolve_rva(0x047195F8));
        inline app::DynamicMethod__Class* get_class() {
            return il2cpp::get_class<app::DynamicMethod__Class>(type_info, "System.Reflection.Emit", "DynamicMethod");
        }
        inline app::DynamicMethod* create() {
            return il2cpp::create_object<app::DynamicMethod>(get_class());
        }
    } // namespace DynamicMethod
} // namespace app::classes::types
