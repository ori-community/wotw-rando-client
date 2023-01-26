#pragma once
#include <Modloader/app/structs/ReadState__Enum_1__Array.h>
#include <Modloader/app/structs/ReadState__Enum_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadState__Enum_1__Array {
        inline app::ReadState__Enum_1__Array__Class** type_info() {
            static app::ReadState__Enum_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReadState__Enum_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04763620));
            }
            return cache;
        }
        inline app::ReadState__Enum_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ReadState__Enum_1__Array__Class>(type_info(), "System.Xml", "ReadState[]");
        }
        inline app::ReadState__Enum_1__Array* create() {
            return il2cpp::create_object<app::ReadState__Enum_1__Array>(get_class());
        }
    } // namespace ReadState__Enum_1__Array
} // namespace app::classes::types
