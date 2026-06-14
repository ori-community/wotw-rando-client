#pragma once
#include <Modloader/app/structs/TypeNameFormatFlags__Enum.h>
#include <Modloader/app/structs/TypeNameFormatFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeNameFormatFlags__Enum {
        inline app::TypeNameFormatFlags__Enum__Class** type_info() {
            static app::TypeNameFormatFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeNameFormatFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeNameFormatFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameFormatFlags__Enum__Class>(type_info(), "System", "TypeNameFormatFlags");
        }
        inline app::TypeNameFormatFlags__Enum* create() {
            return il2cpp::create_object<app::TypeNameFormatFlags__Enum>(get_class());
        }
    } // namespace TypeNameFormatFlags__Enum
} // namespace app::classes::types
