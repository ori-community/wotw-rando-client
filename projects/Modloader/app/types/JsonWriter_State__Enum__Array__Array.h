#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonWriter_State__Enum__Array__Array__Class.h>
#include <Modloader/app/structs/JsonWriter_State__Enum__Array__Array.h>

namespace app::classes::types {
    namespace JsonWriter_State__Enum__Array__Array {
        inline app::JsonWriter_State__Enum__Array__Array__Class** type_info = (app::JsonWriter_State__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0478ED18));
        inline app::JsonWriter_State__Enum__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonWriter_State__Enum__Array__Array__Class>(type_info, "Newtonsoft.Json", "JsonWriter+State[][]");
        }
        inline app::JsonWriter_State__Enum__Array__Array* create() {
            return il2cpp::create_object<app::JsonWriter_State__Enum__Array__Array>(get_class());
        }
    } // namespace JsonWriter_State__Enum__Array__Array
} // namespace app::classes::types
