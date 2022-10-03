#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonTextWriter__Class** type_info;
        inline app::JsonTextWriter__Class* get_class() {
            return il2cpp::get_class<app::JsonTextWriter__Class>(type_info, "Newtonsoft.Json", "JsonTextWriter");
        }
        inline app::JsonTextWriter* create() {
            return il2cpp::create_object<app::JsonTextWriter>(get_class());
        }
    } // namespace JsonTextWriter
} // namespace app::classes::types
