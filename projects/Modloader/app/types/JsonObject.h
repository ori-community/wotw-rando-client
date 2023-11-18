#pragma once
#include <Modloader/app/structs/JsonObject.h>
#include <Modloader/app/structs/JsonObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonObject {
        inline app::JsonObject__Class** type_info() {
            static app::JsonObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonObject__Class**)(modloader::win::memory::resolve_rva(0x04771490));
            }
            return cache;
        }
        inline app::JsonObject__Class* get_class() {
            return il2cpp::get_class<app::JsonObject__Class>(type_info(), "PlayFab.Json", "JsonObject");
        }
        inline app::JsonObject* create() {
            return il2cpp::create_object<app::JsonObject>(get_class());
        }
    } // namespace JsonObject
} // namespace app::classes::types
