#pragma once
#include <Modloader/app/structs/ComboInput__Array.h>
#include <Modloader/app/structs/ComboInput__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboInput__Array {
        inline app::ComboInput__Array__Class** type_info() {
            static app::ComboInput__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboInput__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboInput__Array__Class* get_class() {
            return il2cpp::get_class<app::ComboInput__Array__Class>(type_info(), "Moon.ComboSystem", "ComboInput[]");
        }
        inline app::ComboInput__Array* create() {
            return il2cpp::create_object<app::ComboInput__Array>(get_class());
        }
    } // namespace ComboInput__Array
} // namespace app::classes::types
