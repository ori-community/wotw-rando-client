#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonReaderException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonReaderException__Class** type_info;
        inline app::JsonReaderException__Class* get_class() {
            return il2cpp::get_class<app::JsonReaderException__Class>(type_info, "Newtonsoft.Json", "JsonReaderException");
        }
        inline app::JsonReaderException* create() {
            return il2cpp::create_object<app::JsonReaderException>(get_class());
        }
    } // namespace JsonReaderException
} // namespace app::classes::types
