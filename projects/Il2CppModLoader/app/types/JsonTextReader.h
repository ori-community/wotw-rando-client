#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonTextReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonTextReader__Class** type_info;
        inline app::JsonTextReader__Class* get_class() {
            return il2cpp::get_class<app::JsonTextReader__Class>(type_info, "Newtonsoft.Json", "JsonTextReader");
        }
        inline app::JsonTextReader* create() {
            return il2cpp::create_object<app::JsonTextReader>(get_class());
        }
    } // namespace JsonTextReader
} // namespace app::classes::types
