#pragma once
#include <Modloader/app/structs/DateTimeParse_DS__Enum__Array__Array.h>
#include <Modloader/app/structs/DateTimeParse_DS__Enum__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse_DS__Enum__Array__Array {
        inline app::DateTimeParse_DS__Enum__Array__Array__Class** type_info() {
            static app::DateTimeParse_DS__Enum__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeParse_DS__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04734F00));
            }
            return cache;
        }
        inline app::DateTimeParse_DS__Enum__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTimeParse_DS__Enum__Array__Array__Class>(type_info(), "System", "DateTimeParse+DS[][]");
        }
        inline app::DateTimeParse_DS__Enum__Array__Array* create() {
            return il2cpp::create_object<app::DateTimeParse_DS__Enum__Array__Array>(get_class());
        }
    } // namespace DateTimeParse_DS__Enum__Array__Array
} // namespace app::classes::types
