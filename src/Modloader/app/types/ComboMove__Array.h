#pragma once
#include <Modloader/app/structs/ComboMove__Array.h>
#include <Modloader/app/structs/ComboMove__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboMove__Array {
        inline app::ComboMove__Array__Class** type_info() {
            static app::ComboMove__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboMove__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboMove__Array__Class>(type_info(), "Moon.ComboSystem", "ComboMove[]");
        }
        inline app::ComboMove__Array* create() {
            return il2cpp::create_object<app::ComboMove__Array>(get_class());
        }
    } // namespace ComboMove__Array
} // namespace app::classes::types
