#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JValue_JValueDynamicProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JValue_JValueDynamicProxy__Class** type_info;
        inline app::JValue_JValueDynamicProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::JValue_JValueDynamicProxy__Class>(type_info, "Newtonsoft.Json.Linq", "JValue", "JValueDynamicProxy");
        }
        inline app::JValue_JValueDynamicProxy* create() {
            return il2cpp::create_object<app::JValue_JValueDynamicProxy>(get_class());
        }
    } // namespace JValue_JValueDynamicProxy
} // namespace app::classes::types
