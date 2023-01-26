#pragma once
#include <Modloader/app/structs/JsonDictionaryAttribute.h>
#include <Modloader/app/structs/JsonDictionaryAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonDictionaryAttribute {
        inline app::JsonDictionaryAttribute__Class** type_info() {
            static app::JsonDictionaryAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JsonDictionaryAttribute__Class**)(modloader::win::memory::resolve_rva(0x04702FB8));
            }
            return cache;
        }
        inline app::JsonDictionaryAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonDictionaryAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonDictionaryAttribute");
        }
        inline app::JsonDictionaryAttribute* create() {
            return il2cpp::create_object<app::JsonDictionaryAttribute>(get_class());
        }
    } // namespace JsonDictionaryAttribute
} // namespace app::classes::types
