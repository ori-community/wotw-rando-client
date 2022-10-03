#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TorchComboMoveAdapter__Array {
        namespace {
            app::TorchComboMoveAdapter__Array__Class* type_info_ref = nullptr;
        }
        app::TorchComboMoveAdapter__Array__Class** type_info = &type_info_ref;
        inline app::TorchComboMoveAdapter__Array__Class* get_class() {
            return il2cpp::get_class<app::TorchComboMoveAdapter__Array__Class>(type_info, "Moon.ComboSystem", "TorchComboMoveAdapter[]");
        }
        inline app::TorchComboMoveAdapter__Array* create() {
            return il2cpp::create_object<app::TorchComboMoveAdapter__Array>(get_class());
        }
    } // namespace TorchComboMoveAdapter__Array
} // namespace app::classes::types
