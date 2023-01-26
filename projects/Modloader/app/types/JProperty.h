#pragma once
#include <Modloader/app/structs/JProperty.h>
#include <Modloader/app/structs/JProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JProperty {
        inline app::JProperty__Class** type_info() {
            static app::JProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JProperty__Class**)(modloader::win::memory::resolve_rva(0x04764E98));
            }
            return cache;
        }
        inline app::JProperty__Class* get_class() {
            return il2cpp::get_class<app::JProperty__Class>(type_info(), "Newtonsoft.Json.Linq", "JProperty");
        }
        inline app::JProperty* create() {
            return il2cpp::create_object<app::JProperty>(get_class());
        }
    } // namespace JProperty
} // namespace app::classes::types
