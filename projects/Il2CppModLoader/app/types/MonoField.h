#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoField {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoField__Class** type_info;
        inline app::MonoField__Class* get_class() {
            return il2cpp::get_class<app::MonoField__Class>(type_info, "System.Reflection", "MonoField");
        }
        inline app::MonoField* create() {
            return il2cpp::create_object<app::MonoField>(get_class());
        }
    } // namespace MonoField
} // namespace app::classes::types
