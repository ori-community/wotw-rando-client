#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TargetException__Class** type_info;
        inline app::TargetException__Class* get_class() {
            return il2cpp::get_class<app::TargetException__Class>(type_info, "System.Reflection", "TargetException");
        }
        inline app::TargetException* create() {
            return il2cpp::create_object<app::TargetException>(get_class());
        }
    } // namespace TargetException
} // namespace app::classes::types
