#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComboMoveProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComboMoveProvider__Class** type_info;
        inline app::IComboMoveProvider__Class* get_class() {
            return il2cpp::get_class<app::IComboMoveProvider__Class>(type_info, "Moon.ComboSystem", "IComboMoveProvider");
        }
        inline app::IComboMoveProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IComboMoveProvider__Array>(get_class(), size);
        }
    } // namespace IComboMoveProvider
} // namespace app::classes::types
