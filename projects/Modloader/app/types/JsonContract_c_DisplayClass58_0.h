#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonContract_c_DisplayClass58_0__Class.h>
#include <Modloader/app/structs/JsonContract_c_DisplayClass58_0.h>

namespace app::classes::types {
    namespace JsonContract_c_DisplayClass58_0 {
        inline app::JsonContract_c_DisplayClass58_0__Class** type_info = (app::JsonContract_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x04741738));
        inline app::JsonContract_c_DisplayClass58_0__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonContract_c_DisplayClass58_0__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonContract", "<>c__DisplayClass58_0");
        }
        inline app::JsonContract_c_DisplayClass58_0* create() {
            return il2cpp::create_object<app::JsonContract_c_DisplayClass58_0>(get_class());
        }
    } // namespace JsonContract_c_DisplayClass58_0
} // namespace app::classes::types
