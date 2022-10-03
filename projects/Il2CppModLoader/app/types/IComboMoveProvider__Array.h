#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComboMoveProvider__Array {
        namespace {
            app::IComboMoveProvider__Array__Class* type_info_ref = nullptr;
        }
        app::IComboMoveProvider__Array__Class** type_info = &type_info_ref;
        inline app::IComboMoveProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IComboMoveProvider__Array__Class>(type_info, "Moon.ComboSystem", "IComboMoveProvider[]");
        }
        inline app::IComboMoveProvider__Array* create() {
            return il2cpp::create_object<app::IComboMoveProvider__Array>(get_class());
        }
    } // namespace IComboMoveProvider__Array
} // namespace app::classes::types
