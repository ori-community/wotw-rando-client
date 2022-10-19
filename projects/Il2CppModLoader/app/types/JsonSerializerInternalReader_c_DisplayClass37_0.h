#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonSerializerInternalReader_c_DisplayClass37_0 {
        inline app::JsonSerializerInternalReader_c_DisplayClass37_0__Class** type_info = (app::JsonSerializerInternalReader_c_DisplayClass37_0__Class**)(modloader::win::memory::resolve_rva(0x04767298));
        inline app::JsonSerializerInternalReader_c_DisplayClass37_0__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonSerializerInternalReader_c_DisplayClass37_0__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader", "<>c__DisplayClass37_0");
        }
        inline app::JsonSerializerInternalReader_c_DisplayClass37_0* create() {
            return il2cpp::create_object<app::JsonSerializerInternalReader_c_DisplayClass37_0>(get_class());
        }
    } // namespace JsonSerializerInternalReader_c_DisplayClass37_0
} // namespace app::classes::types
