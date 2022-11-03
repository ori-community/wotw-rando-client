#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonLoadSettings {
        namespace {
            inline app::JsonLoadSettings__Class* type_info_ref = nullptr;
        }
        inline app::JsonLoadSettings__Class** type_info = &type_info_ref;
        inline app::JsonLoadSettings__Class* get_class() {
            return il2cpp::get_class<app::JsonLoadSettings__Class>(type_info, "Newtonsoft.Json.Linq", "JsonLoadSettings");
        }
        inline app::JsonLoadSettings* create() {
            return il2cpp::create_object<app::JsonLoadSettings>(get_class());
        }
    } // namespace JsonLoadSettings
} // namespace app::classes::types
