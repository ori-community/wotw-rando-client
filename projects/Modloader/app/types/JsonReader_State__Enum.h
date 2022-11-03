#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonReader_State__Enum {
        inline app::JsonReader_State__Enum__Class** type_info = (app::JsonReader_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757260));
        inline app::JsonReader_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonReader_State__Enum__Class>(type_info, "Newtonsoft.Json", "JsonReader", "State");
        }
        inline app::JsonReader_State__Enum* create() {
            return il2cpp::create_object<app::JsonReader_State__Enum>(get_class());
        }
    } // namespace JsonReader_State__Enum
} // namespace app::classes::types
