#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JTokenType__Enum__Array {
        inline app::JTokenType__Enum__Array__Class** type_info = (app::JTokenType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04791AA8));
        inline app::JTokenType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::JTokenType__Enum__Array__Class>(type_info, "Newtonsoft.Json.Linq", "JTokenType[]");
        }
        inline app::JTokenType__Enum__Array* create() {
            return il2cpp::create_object<app::JTokenType__Enum__Array>(get_class());
        }
    } // namespace JTokenType__Enum__Array
} // namespace app::classes::types
