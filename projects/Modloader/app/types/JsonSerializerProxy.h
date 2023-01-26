#pragma once
#include <Modloader/app/structs/JsonSerializerProxy.h>
#include <Modloader/app/structs/JsonSerializerProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonSerializerProxy {
        inline app::JsonSerializerProxy__Class** type_info() {
            static app::JsonSerializerProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonSerializerProxy__Class**)(modloader::win::memory::resolve_rva(0x04757FD8));
            }
            return cache;
        }
        inline app::JsonSerializerProxy__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializerProxy__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonSerializerProxy");
        }
        inline app::JsonSerializerProxy* create() {
            return il2cpp::create_object<app::JsonSerializerProxy>(get_class());
        }
    } // namespace JsonSerializerProxy
} // namespace app::classes::types
