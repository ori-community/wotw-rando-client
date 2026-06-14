#pragma once
#include <Modloader/app/structs/JObject_JObjectDynamicProxy_c.h>
#include <Modloader/app/structs/JObject_JObjectDynamicProxy_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JObject_JObjectDynamicProxy_c {
        inline app::JObject_JObjectDynamicProxy_c__Class** type_info() {
            static app::JObject_JObjectDynamicProxy_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JObject_JObjectDynamicProxy_c__Class**)(modloader::win::memory::resolve_rva(0x0473FE20));
            }
            return cache;
        }
        inline app::JObject_JObjectDynamicProxy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JObject_JObjectDynamicProxy_c__Class>(type_info(), "Newtonsoft.Json.Linq", "JObject+JObjectDynamicProxy", "<>c");
        }
        inline app::JObject_JObjectDynamicProxy_c* create() {
            return il2cpp::create_object<app::JObject_JObjectDynamicProxy_c>(get_class());
        }
    } // namespace JObject_JObjectDynamicProxy_c
} // namespace app::classes::types
