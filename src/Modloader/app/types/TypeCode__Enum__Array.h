#pragma once
#include <Modloader/app/structs/TypeCode__Enum__Array.h>
#include <Modloader/app/structs/TypeCode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeCode__Enum__Array {
        inline app::TypeCode__Enum__Array__Class** type_info() {
            static app::TypeCode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeCode__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04744D38));
            }
            return cache;
        }
        inline app::TypeCode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeCode__Enum__Array__Class>(type_info(), "System", "TypeCode[]");
        }
        inline app::TypeCode__Enum__Array* create() {
            return il2cpp::create_object<app::TypeCode__Enum__Array>(get_class());
        }
    } // namespace TypeCode__Enum__Array
} // namespace app::classes::types
