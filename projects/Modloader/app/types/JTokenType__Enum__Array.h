#pragma once
#include <Modloader/app/structs/JTokenType__Enum__Array.h>
#include <Modloader/app/structs/JTokenType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JTokenType__Enum__Array {
        inline app::JTokenType__Enum__Array__Class** type_info() {
            static app::JTokenType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JTokenType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04791AA8));
            }
            return cache;
        }
        inline app::JTokenType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::JTokenType__Enum__Array__Class>(type_info(), "Newtonsoft.Json.Linq", "JTokenType[]");
        }
        inline app::JTokenType__Enum__Array* create() {
            return il2cpp::create_object<app::JTokenType__Enum__Array>(get_class());
        }
    } // namespace JTokenType__Enum__Array
} // namespace app::classes::types
