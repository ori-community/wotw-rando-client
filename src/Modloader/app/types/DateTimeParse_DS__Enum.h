#pragma once
#include <Modloader/app/structs/DateTimeParse_DS__Enum.h>
#include <Modloader/app/structs/DateTimeParse_DS__Enum__Array.h>
#include <Modloader/app/structs/DateTimeParse_DS__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse_DS__Enum {
        inline app::DateTimeParse_DS__Enum__Class** type_info() {
            static app::DateTimeParse_DS__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeParse_DS__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeParse_DS__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_DS__Enum__Class>(type_info(), "System", "DateTimeParse", "DS");
        }
        inline app::DateTimeParse_DS__Enum* create() {
            return il2cpp::create_object<app::DateTimeParse_DS__Enum>(get_class());
        }
        inline app::DateTimeParse_DS__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DateTimeParse_DS__Enum__Array>(get_class(), size);
        }
        inline app::DateTimeParse_DS__Enum__Array* create_array(const std::vector<app::DateTimeParse_DS__Enum*>& items) {
            return il2cpp::array_new<app::DateTimeParse_DS__Enum__Array>(get_class(), items);
        }
    } // namespace DateTimeParse_DS__Enum
} // namespace app::classes::types
