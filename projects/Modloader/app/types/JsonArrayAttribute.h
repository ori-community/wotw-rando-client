#pragma once
#include <Modloader/app/structs/JsonArrayAttribute.h>
#include <Modloader/app/structs/JsonArrayAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonArrayAttribute {
        inline app::JsonArrayAttribute__Class** type_info() {
            static app::JsonArrayAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonArrayAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476DF58));
            }
            return cache;
        }
        inline app::JsonArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonArrayAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonArrayAttribute");
        }
        inline app::JsonArrayAttribute* create() {
            return il2cpp::create_object<app::JsonArrayAttribute>(get_class());
        }
    } // namespace JsonArrayAttribute
} // namespace app::classes::types
