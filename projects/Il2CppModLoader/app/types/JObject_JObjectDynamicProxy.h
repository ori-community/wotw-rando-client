#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JObject_JObjectDynamicProxy {
        inline app::JObject_JObjectDynamicProxy__Class** type_info = (app::JObject_JObjectDynamicProxy__Class**)(modloader::win::memory::resolve_rva(0x04746FA8));
        inline app::JObject_JObjectDynamicProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::JObject_JObjectDynamicProxy__Class>(type_info, "Newtonsoft.Json.Linq", "JObject", "JObjectDynamicProxy");
        }
        inline app::JObject_JObjectDynamicProxy* create() {
            return il2cpp::create_object<app::JObject_JObjectDynamicProxy>(get_class());
        }
    } // namespace JObject_JObjectDynamicProxy
} // namespace app::classes::types
