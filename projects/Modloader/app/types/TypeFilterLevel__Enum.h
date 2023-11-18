#pragma once
#include <Modloader/app/structs/TypeFilterLevel__Enum.h>
#include <Modloader/app/structs/TypeFilterLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeFilterLevel__Enum {
        inline app::TypeFilterLevel__Enum__Class** type_info() {
            static app::TypeFilterLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeFilterLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeFilterLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeFilterLevel__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters", "TypeFilterLevel");
        }
        inline app::TypeFilterLevel__Enum* create() {
            return il2cpp::create_object<app::TypeFilterLevel__Enum>(get_class());
        }
    } // namespace TypeFilterLevel__Enum
} // namespace app::classes::types
