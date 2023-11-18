#pragma once
#include <Modloader/app/structs/JsonExtensionDataAttribute.h>
#include <Modloader/app/structs/JsonExtensionDataAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonExtensionDataAttribute {
        inline app::JsonExtensionDataAttribute__Class** type_info() {
            static app::JsonExtensionDataAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonExtensionDataAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonExtensionDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonExtensionDataAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonExtensionDataAttribute");
        }
        inline app::JsonExtensionDataAttribute* create() {
            return il2cpp::create_object<app::JsonExtensionDataAttribute>(get_class());
        }
    } // namespace JsonExtensionDataAttribute
} // namespace app::classes::types
