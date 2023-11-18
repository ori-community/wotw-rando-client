#pragma once
#include <Modloader/app/structs/JsonWriterException.h>
#include <Modloader/app/structs/JsonWriterException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonWriterException {
        inline app::JsonWriterException__Class** type_info() {
            static app::JsonWriterException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonWriterException__Class**)(modloader::win::memory::resolve_rva(0x0470FBC0));
            }
            return cache;
        }
        inline app::JsonWriterException__Class* get_class() {
            return il2cpp::get_class<app::JsonWriterException__Class>(type_info(), "Newtonsoft.Json", "JsonWriterException");
        }
        inline app::JsonWriterException* create() {
            return il2cpp::create_object<app::JsonWriterException>(get_class());
        }
    } // namespace JsonWriterException
} // namespace app::classes::types
