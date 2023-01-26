#pragma once
#include <Modloader/app/structs/IComboMove__Array.h>
#include <Modloader/app/structs/IComboMove__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComboMove__Array {
        inline app::IComboMove__Array__Class** type_info() {
            static app::IComboMove__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IComboMove__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::IComboMove__Array__Class>(type_info(), "Moon.ComboSystem", "IComboMove[]");
        }
        inline app::IComboMove__Array* create() {
            return il2cpp::create_object<app::IComboMove__Array>(get_class());
        }
    } // namespace IComboMove__Array
} // namespace app::classes::types
