#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStrongBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStrongBox__Class** type_info;
        inline app::IStrongBox__Class* get_class() {
            return il2cpp::get_class<app::IStrongBox__Class>(type_info, "System.Runtime.CompilerServices", "IStrongBox");
        }
        inline app::IStrongBox__Array* create_array(int size) {
            return il2cpp::array_new<app::IStrongBox__Array>(get_class(), size);
        }
    } // namespace IStrongBox
} // namespace app::classes::types
