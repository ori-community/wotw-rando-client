#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JObject_JObjectDynamicProxy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JObject_JObjectDynamicProxy_c__Class** type_info;
        inline app::JObject_JObjectDynamicProxy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JObject_JObjectDynamicProxy_c__Class>(type_info, "Newtonsoft.Json.Linq", "JObject+JObjectDynamicProxy", "<>c");
        }
        inline app::JObject_JObjectDynamicProxy_c* create() {
            return il2cpp::create_object<app::JObject_JObjectDynamicProxy_c>(get_class());
        }
    } // namespace JObject_JObjectDynamicProxy_c
} // namespace app::classes::types
