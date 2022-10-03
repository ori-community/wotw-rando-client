#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonWriterException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonWriterException__Class** type_info;
        inline app::JsonWriterException__Class* get_class() {
            return il2cpp::get_class<app::JsonWriterException__Class>(type_info, "Newtonsoft.Json", "JsonWriterException");
        }
        inline app::JsonWriterException* create() {
            return il2cpp::create_object<app::JsonWriterException>(get_class());
        }
    } // namespace JsonWriterException
} // namespace app::classes::types
