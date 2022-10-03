#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonConverterCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonConverterCollection__Class** type_info;
        inline app::JsonConverterCollection__Class* get_class() {
            return il2cpp::get_class<app::JsonConverterCollection__Class>(type_info, "Newtonsoft.Json", "JsonConverterCollection");
        }
        inline app::JsonConverterCollection* create() {
            return il2cpp::create_object<app::JsonConverterCollection>(get_class());
        }
    } // namespace JsonConverterCollection
} // namespace app::classes::types
