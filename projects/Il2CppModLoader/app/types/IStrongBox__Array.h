#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStrongBox__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStrongBox__Array__Class** type_info;
        inline app::IStrongBox__Array__Class* get_class() {
            return il2cpp::get_class<app::IStrongBox__Array__Class>(type_info, "System.Runtime.CompilerServices", "IStrongBox[]");
        }
        inline app::IStrongBox__Array* create() {
            return il2cpp::create_object<app::IStrongBox__Array>(get_class());
        }
    } // namespace IStrongBox__Array
} // namespace app::classes::types
