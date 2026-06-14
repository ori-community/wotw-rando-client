#pragma once
#include <Modloader/app/structs/BindingFlags__Enum_1.h>
#include <Modloader/app/structs/BindingFlags__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingFlags__Enum_1 {
        inline app::BindingFlags__Enum_1__Class** type_info() {
            static app::BindingFlags__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindingFlags__Enum_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindingFlags__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::BindingFlags__Enum_1__Class>(type_info(), "UWPCompat", "BindingFlags");
        }
        inline app::BindingFlags__Enum_1* create() {
            return il2cpp::create_object<app::BindingFlags__Enum_1>(get_class());
        }
    } // namespace BindingFlags__Enum_1
} // namespace app::classes::types
