#pragma once
#include <Modloader/app/structs/JsonObjectAttribute.h>
#include <Modloader/app/structs/JsonObjectAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonObjectAttribute {
        inline app::JsonObjectAttribute__Class** type_info() {
            static app::JsonObjectAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonObjectAttribute__Class**)(modloader::win::memory::resolve_rva(0x04758A30));
            }
            return cache;
        }
        inline app::JsonObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonObjectAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonObjectAttribute");
        }
        inline app::JsonObjectAttribute* create() {
            return il2cpp::create_object<app::JsonObjectAttribute>(get_class());
        }
    } // namespace JsonObjectAttribute
} // namespace app::classes::types
