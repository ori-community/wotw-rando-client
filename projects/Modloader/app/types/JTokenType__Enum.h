#pragma once
#include <Modloader/app/structs/JTokenType__Enum.h>
#include <Modloader/app/structs/JTokenType__Enum__Array.h>
#include <Modloader/app/structs/JTokenType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JTokenType__Enum {
        inline app::JTokenType__Enum__Class** type_info() {
            static app::JTokenType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JTokenType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04787558));
            }
            return cache;
        }
        inline app::JTokenType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JTokenType__Enum__Class>(type_info(), "Newtonsoft.Json.Linq", "JTokenType");
        }
        inline app::JTokenType__Enum* create() {
            return il2cpp::create_object<app::JTokenType__Enum>(get_class());
        }
        inline app::JTokenType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JTokenType__Enum__Array>(get_class(), size);
        }
        inline app::JTokenType__Enum__Array* create_array(const std::vector<app::JTokenType__Enum*>& items) {
            return il2cpp::array_new<app::JTokenType__Enum__Array>(get_class(), items);
        }
    } // namespace JTokenType__Enum
} // namespace app::classes::types
