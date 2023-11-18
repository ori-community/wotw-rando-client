#pragma once
#include <Modloader/app/structs/JsonSerializationException.h>
#include <Modloader/app/structs/JsonSerializationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializationException {
        inline app::JsonSerializationException__Class** type_info() {
            static app::JsonSerializationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializationException__Class**)(modloader::win::memory::resolve_rva(0x04792720));
            }
            return cache;
        }
        inline app::JsonSerializationException__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializationException__Class>(type_info(), "Newtonsoft.Json", "JsonSerializationException");
        }
        inline app::JsonSerializationException* create() {
            return il2cpp::create_object<app::JsonSerializationException>(get_class());
        }
    } // namespace JsonSerializationException
} // namespace app::classes::types
