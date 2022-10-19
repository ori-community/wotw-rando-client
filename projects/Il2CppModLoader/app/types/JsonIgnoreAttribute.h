#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonIgnoreAttribute {
        namespace {
            inline app::JsonIgnoreAttribute__Class* type_info_ref = nullptr;
        }
        inline app::JsonIgnoreAttribute__Class** type_info = &type_info_ref;
        inline app::JsonIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonIgnoreAttribute__Class>(type_info, "Newtonsoft.Json", "JsonIgnoreAttribute");
        }
        inline app::JsonIgnoreAttribute* create() {
            return il2cpp::create_object<app::JsonIgnoreAttribute>(get_class());
        }
    } // namespace JsonIgnoreAttribute
} // namespace app::classes::types
