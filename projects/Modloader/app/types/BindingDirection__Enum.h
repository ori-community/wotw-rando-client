#pragma once
#include <Modloader/app/structs/BindingDirection__Enum.h>
#include <Modloader/app/structs/BindingDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindingDirection__Enum {
        inline app::BindingDirection__Enum__Class** type_info() {
            static app::BindingDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindingDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindingDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::BindingDirection__Enum__Class>(type_info(), "System.ComponentModel", "BindingDirection");
        }
        inline app::BindingDirection__Enum* create() {
            return il2cpp::create_object<app::BindingDirection__Enum>(get_class());
        }
    } // namespace BindingDirection__Enum
} // namespace app::classes::types
