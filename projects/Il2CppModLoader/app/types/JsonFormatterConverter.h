#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonFormatterConverter {
        inline app::JsonFormatterConverter__Class** type_info = (app::JsonFormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x0473BBF0));
        inline app::JsonFormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::JsonFormatterConverter__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
        }
        inline app::JsonFormatterConverter* create() {
            return il2cpp::create_object<app::JsonFormatterConverter>(get_class());
        }
    } // namespace JsonFormatterConverter
} // namespace app::classes::types
