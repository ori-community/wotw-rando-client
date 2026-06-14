#pragma once
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/JsonWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonWriter {
        inline app::JsonWriter__Class** type_info() {
            static app::JsonWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonWriter__Class**)(modloader::win::memory::resolve_rva(0x04743CC0));
            }
            return cache;
        }
        inline app::JsonWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonWriter__Class>(type_info(), "Newtonsoft.Json", "JsonWriter");
        }
        inline app::JsonWriter* create() {
            return il2cpp::create_object<app::JsonWriter>(get_class());
        }
    } // namespace JsonWriter
} // namespace app::classes::types
