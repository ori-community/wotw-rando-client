#pragma once
#include <Modloader/app/structs/JsonLoadSettings.h>
#include <Modloader/app/structs/JsonLoadSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonLoadSettings {
        inline app::JsonLoadSettings__Class** type_info() {
            static app::JsonLoadSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonLoadSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonLoadSettings__Class* get_class() {
            return il2cpp::get_class<app::JsonLoadSettings__Class>(type_info(), "Newtonsoft.Json.Linq", "JsonLoadSettings");
        }
        inline app::JsonLoadSettings* create() {
            return il2cpp::create_object<app::JsonLoadSettings>(get_class());
        }
    } // namespace JsonLoadSettings
} // namespace app::classes::types
