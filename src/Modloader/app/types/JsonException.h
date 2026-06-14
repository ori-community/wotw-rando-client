#pragma once
#include <Modloader/app/structs/JsonException.h>
#include <Modloader/app/structs/JsonException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonException {
        inline app::JsonException__Class** type_info() {
            static app::JsonException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonException__Class**)(modloader::win::memory::resolve_rva(0x04781DA8));
            }
            return cache;
        }
        inline app::JsonException__Class* get_class() {
            return il2cpp::get_class<app::JsonException__Class>(type_info(), "Newtonsoft.Json", "JsonException");
        }
        inline app::JsonException* create() {
            return il2cpp::create_object<app::JsonException>(get_class());
        }
    } // namespace JsonException
} // namespace app::classes::types
