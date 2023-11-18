#pragma once
#include <Modloader/app/structs/JsonRequiredAttribute.h>
#include <Modloader/app/structs/JsonRequiredAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonRequiredAttribute {
        inline app::JsonRequiredAttribute__Class** type_info() {
            static app::JsonRequiredAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonRequiredAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonRequiredAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonRequiredAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonRequiredAttribute");
        }
        inline app::JsonRequiredAttribute* create() {
            return il2cpp::create_object<app::JsonRequiredAttribute>(get_class());
        }
    } // namespace JsonRequiredAttribute
} // namespace app::classes::types
