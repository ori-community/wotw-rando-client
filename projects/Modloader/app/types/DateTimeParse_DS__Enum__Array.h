#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeParse_DS__Enum__Array {
        inline app::DateTimeParse_DS__Enum__Array__Class** type_info = (app::DateTimeParse_DS__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04741AF0));
        inline app::DateTimeParse_DS__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTimeParse_DS__Enum__Array__Class>(type_info, "System", "DateTimeParse+DS[]");
        }
        inline app::DateTimeParse_DS__Enum__Array* create() {
            return il2cpp::create_object<app::DateTimeParse_DS__Enum__Array>(get_class());
        }
        inline app::DateTimeParse_DS__Enum__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::DateTimeParse_DS__Enum__Array__Array>(get_class(), size);
        }
        inline app::DateTimeParse_DS__Enum__Array__Array* create_array(const std::vector<app::DateTimeParse_DS__Enum__Array*>& items) {
            return il2cpp::array_new<app::DateTimeParse_DS__Enum__Array__Array>(get_class(), items);
        }
    } // namespace DateTimeParse_DS__Enum__Array
} // namespace app::classes::types
