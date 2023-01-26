#pragma once
#include <Modloader/app/structs/JsonWriter_State__Enum__Array.h>
#include <Modloader/app/structs/JsonWriter_State__Enum__Array__Array.h>
#include <Modloader/app/structs/JsonWriter_State__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonWriter_State__Enum__Array {
        inline app::JsonWriter_State__Enum__Array__Class** type_info() {
            static app::JsonWriter_State__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonWriter_State__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04713F70));
            }
            return cache;
        }
        inline app::JsonWriter_State__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonWriter_State__Enum__Array__Class>(type_info(), "Newtonsoft.Json", "JsonWriter+State[]");
        }
        inline app::JsonWriter_State__Enum__Array* create() {
            return il2cpp::create_object<app::JsonWriter_State__Enum__Array>(get_class());
        }
        inline app::JsonWriter_State__Enum__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::JsonWriter_State__Enum__Array__Array>(get_class(), size);
        }
        inline app::JsonWriter_State__Enum__Array__Array* create_array(const std::vector<app::JsonWriter_State__Enum__Array*>& items) {
            return il2cpp::array_new<app::JsonWriter_State__Enum__Array__Array>(get_class(), items);
        }
    } // namespace JsonWriter_State__Enum__Array
} // namespace app::classes::types
