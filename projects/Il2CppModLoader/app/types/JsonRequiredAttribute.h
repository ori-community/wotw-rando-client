#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonRequiredAttribute {
        namespace {
            app::JsonRequiredAttribute__Class* type_info_ref = nullptr;
        }
        app::JsonRequiredAttribute__Class** type_info = &type_info_ref;
        inline app::JsonRequiredAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonRequiredAttribute__Class>(type_info, "Newtonsoft.Json", "JsonRequiredAttribute");
        }
        inline app::JsonRequiredAttribute* create() {
            return il2cpp::create_object<app::JsonRequiredAttribute>(get_class());
        }
    } // namespace JsonRequiredAttribute
} // namespace app::classes::types
