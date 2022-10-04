#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IReflectableType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IReflectableType__Class** type_info;
        inline app::IReflectableType__Class* get_class() {
            return il2cpp::get_class<app::IReflectableType__Class>(type_info, "System.Reflection", "IReflectableType");
        }
    } // namespace IReflectableType
} // namespace app::classes::types
