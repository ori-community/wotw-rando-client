#pragma once
#include <Modloader/app/structs/JsonFormatterConverter.h>
#include <Modloader/app/structs/JsonFormatterConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonFormatterConverter {
        inline app::JsonFormatterConverter__Class** type_info() {
            static app::JsonFormatterConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonFormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x0473BBF0));
            }
            return cache;
        }
        inline app::JsonFormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::JsonFormatterConverter__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
        }
        inline app::JsonFormatterConverter* create() {
            return il2cpp::create_object<app::JsonFormatterConverter>(get_class());
        }
    } // namespace JsonFormatterConverter
} // namespace app::classes::types
