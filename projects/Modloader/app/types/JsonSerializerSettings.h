#pragma once
#include <Modloader/app/structs/JsonSerializerSettings.h>
#include <Modloader/app/structs/JsonSerializerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerSettings {
        inline app::JsonSerializerSettings__Class** type_info() {
            static app::JsonSerializerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerSettings__Class**)(modloader::win::memory::resolve_rva(0x04717918));
            }
            return cache;
        }
        inline app::JsonSerializerSettings__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerSettings__Class>(type_info(), "Newtonsoft.Json", "JsonSerializerSettings");
        }
        inline app::JsonSerializerSettings* create() {
            return il2cpp::create_object<app::JsonSerializerSettings>(get_class());
        }
    } // namespace JsonSerializerSettings
} // namespace app::classes::types
