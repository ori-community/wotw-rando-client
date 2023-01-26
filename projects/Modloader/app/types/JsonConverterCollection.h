#pragma once
#include <Modloader/app/structs/JsonConverterCollection.h>
#include <Modloader/app/structs/JsonConverterCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonConverterCollection {
        inline app::JsonConverterCollection__Class** type_info() {
            static app::JsonConverterCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonConverterCollection__Class**)(modloader::win::memory::resolve_rva(0x0476DE10));
            }
            return cache;
        }
        inline app::JsonConverterCollection__Class* get_class() {
            return il2cpp::get_class<app::JsonConverterCollection__Class>(type_info(), "Newtonsoft.Json", "JsonConverterCollection");
        }
        inline app::JsonConverterCollection* create() {
            return il2cpp::create_object<app::JsonConverterCollection>(get_class());
        }
    } // namespace JsonConverterCollection
} // namespace app::classes::types
