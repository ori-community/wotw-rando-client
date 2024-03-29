#pragma once
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/JsonConverter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonConverter__Array {
        inline app::JsonConverter__Array__Class** type_info() {
            static app::JsonConverter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonConverter__Array__Class**)(modloader::win::memory::resolve_rva(0x047346B8));
            }
            return cache;
        }
        inline app::JsonConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonConverter__Array__Class>(type_info(), "Newtonsoft.Json", "JsonConverter[]");
        }
        inline app::JsonConverter__Array* create() {
            return il2cpp::create_object<app::JsonConverter__Array>(get_class());
        }
    } // namespace JsonConverter__Array
} // namespace app::classes::types
