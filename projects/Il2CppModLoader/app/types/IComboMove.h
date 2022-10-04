#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComboMove {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComboMove__Class** type_info;
        inline app::IComboMove__Class* get_class() {
            return il2cpp::get_class<app::IComboMove__Class>(type_info, "Moon.ComboSystem", "IComboMove");
        }
        inline app::IComboMove__Array* create_array(int size) {
            return il2cpp::array_new<app::IComboMove__Array>(get_class(), size);
        }
    } // namespace IComboMove
} // namespace app::classes::types
