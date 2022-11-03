#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonDictionaryAttribute {
        inline app::JsonDictionaryAttribute__Class** type_info = (app::JsonDictionaryAttribute__Class**)(modloader::win::memory::resolve_rva(0x04702FB8));
        inline app::JsonDictionaryAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonDictionaryAttribute__Class>(type_info, "Newtonsoft.Json", "JsonDictionaryAttribute");
        }
        inline app::JsonDictionaryAttribute* create() {
            return il2cpp::create_object<app::JsonDictionaryAttribute>(get_class());
        }
    } // namespace JsonDictionaryAttribute
} // namespace app::classes::types
