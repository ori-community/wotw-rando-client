#pragma once
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#include <Modloader/app/structs/TypeAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeAttributes__Enum {
        inline app::TypeAttributes__Enum__Class** type_info() {
            static app::TypeAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeAttributes__Enum__Class>(type_info(), "System.Reflection", "TypeAttributes");
        }
        inline app::TypeAttributes__Enum* create() {
            return il2cpp::create_object<app::TypeAttributes__Enum>(get_class());
        }
    } // namespace TypeAttributes__Enum
} // namespace app::classes::types
