#pragma once
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonReader {
        inline app::JsonReader__Class** type_info() {
            static app::JsonReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonReader__Class* get_class() {
            return il2cpp::get_class<app::JsonReader__Class>(type_info(), "Newtonsoft.Json", "JsonReader");
        }
        inline app::JsonReader* create() {
            return il2cpp::create_object<app::JsonReader>(get_class());
        }
    } // namespace JsonReader
} // namespace app::classes::types
