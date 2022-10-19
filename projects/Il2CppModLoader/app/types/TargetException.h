#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetException {
        inline app::TargetException__Class** type_info = (app::TargetException__Class**)(modloader::win::memory::resolve_rva(0x04758D10));
        inline app::TargetException__Class* get_class() {
            return il2cpp::get_class<app::TargetException__Class>(type_info, "System.Reflection", "TargetException");
        }
        inline app::TargetException* create() {
            return il2cpp::create_object<app::TargetException>(get_class());
        }
    } // namespace TargetException
} // namespace app::classes::types
