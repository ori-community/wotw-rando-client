#pragma once
#include <Modloader/app/structs/PropertyAttributes__Enum.h>
#include <Modloader/app/structs/PropertyAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyAttributes__Enum {
        inline app::PropertyAttributes__Enum__Class** type_info() {
            static app::PropertyAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::PropertyAttributes__Enum__Class>(type_info(), "System.Reflection", "PropertyAttributes");
        }
        inline app::PropertyAttributes__Enum* create() {
            return il2cpp::create_object<app::PropertyAttributes__Enum>(get_class());
        }
    } // namespace PropertyAttributes__Enum
} // namespace app::classes::types
