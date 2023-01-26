#pragma once
#include <Modloader/app/structs/TorchComboMoveAdapter__Array.h>
#include <Modloader/app/structs/TorchComboMoveAdapter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TorchComboMoveAdapter__Array {
        inline app::TorchComboMoveAdapter__Array__Class** type_info() {
            static app::TorchComboMoveAdapter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TorchComboMoveAdapter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TorchComboMoveAdapter__Array__Class* get_class() {
            return il2cpp::get_class<app::TorchComboMoveAdapter__Array__Class>(type_info(), "Moon.ComboSystem", "TorchComboMoveAdapter[]");
        }
        inline app::TorchComboMoveAdapter__Array* create() {
            return il2cpp::create_object<app::TorchComboMoveAdapter__Array>(get_class());
        }
    } // namespace TorchComboMoveAdapter__Array
} // namespace app::classes::types
