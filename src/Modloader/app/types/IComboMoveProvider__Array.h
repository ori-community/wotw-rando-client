#pragma once
#include <Modloader/app/structs/IComboMoveProvider__Array.h>
#include <Modloader/app/structs/IComboMoveProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComboMoveProvider__Array {
        inline app::IComboMoveProvider__Array__Class** type_info() {
            static app::IComboMoveProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IComboMoveProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IComboMoveProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IComboMoveProvider__Array__Class>(type_info(), "Moon.ComboSystem", "IComboMoveProvider[]");
        }
        inline app::IComboMoveProvider__Array* create() {
            return il2cpp::create_object<app::IComboMoveProvider__Array>(get_class());
        }
    } // namespace IComboMoveProvider__Array
} // namespace app::classes::types
