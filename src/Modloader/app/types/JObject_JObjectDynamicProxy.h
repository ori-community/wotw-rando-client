#pragma once
#include <Modloader/app/structs/JObject_JObjectDynamicProxy.h>
#include <Modloader/app/structs/JObject_JObjectDynamicProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JObject_JObjectDynamicProxy {
        inline app::JObject_JObjectDynamicProxy__Class** type_info() {
            static app::JObject_JObjectDynamicProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JObject_JObjectDynamicProxy__Class**)(modloader::win::memory::resolve_rva(0x04746FA8));
            }
            return cache;
        }
        inline app::JObject_JObjectDynamicProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::JObject_JObjectDynamicProxy__Class>(type_info(), "Newtonsoft.Json.Linq", "JObject", "JObjectDynamicProxy");
        }
        inline app::JObject_JObjectDynamicProxy* create() {
            return il2cpp::create_object<app::JObject_JObjectDynamicProxy>(get_class());
        }
    } // namespace JObject_JObjectDynamicProxy
} // namespace app::classes::types
