#pragma once
#include <Modloader/app/structs/JsonPropertyCollection.h>
#include <Modloader/app/structs/JsonPropertyCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonPropertyCollection {
        inline app::JsonPropertyCollection__Class** type_info() {
            static app::JsonPropertyCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonPropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x0473A420));
            }
            return cache;
        }
        inline app::JsonPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::JsonPropertyCollection__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonPropertyCollection");
        }
        inline app::JsonPropertyCollection* create() {
            return il2cpp::create_object<app::JsonPropertyCollection>(get_class());
        }
    } // namespace JsonPropertyCollection
} // namespace app::classes::types
