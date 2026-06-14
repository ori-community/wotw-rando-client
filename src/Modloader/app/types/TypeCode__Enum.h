#pragma once
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/TypeCode__Enum__Array.h>
#include <Modloader/app/structs/TypeCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeCode__Enum {
        inline app::TypeCode__Enum__Class** type_info() {
            static app::TypeCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047826D0));
            }
            return cache;
        }
        inline app::TypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeCode__Enum__Class>(type_info(), "System", "TypeCode");
        }
        inline app::TypeCode__Enum* create() {
            return il2cpp::create_object<app::TypeCode__Enum>(get_class());
        }
        inline app::TypeCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeCode__Enum__Array>(get_class(), size);
        }
        inline app::TypeCode__Enum__Array* create_array(const std::vector<app::TypeCode__Enum*>& items) {
            return il2cpp::array_new<app::TypeCode__Enum__Array>(get_class(), items);
        }
    } // namespace TypeCode__Enum
} // namespace app::classes::types
