#pragma once
#include <Modloader/app/structs/TypeSpec_DisplayNameFormat__Enum.h>
#include <Modloader/app/structs/TypeSpec_DisplayNameFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeSpec_DisplayNameFormat__Enum {
        inline app::TypeSpec_DisplayNameFormat__Enum__Class** type_info() {
            static app::TypeSpec_DisplayNameFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeSpec_DisplayNameFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeSpec_DisplayNameFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeSpec_DisplayNameFormat__Enum__Class>(type_info(), "System", "TypeSpec", "DisplayNameFormat");
        }
        inline app::TypeSpec_DisplayNameFormat__Enum* create() {
            return il2cpp::create_object<app::TypeSpec_DisplayNameFormat__Enum>(get_class());
        }
    } // namespace TypeSpec_DisplayNameFormat__Enum
} // namespace app::classes::types
