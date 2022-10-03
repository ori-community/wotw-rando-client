#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonSerializer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonSerializer__Class** type_info;
        inline app::JsonSerializer__Class* get_class() {
            return il2cpp::get_class<app::JsonSerializer__Class>(type_info, "Newtonsoft.Json", "JsonSerializer");
        }
        inline app::JsonSerializer* create() {
            return il2cpp::create_object<app::JsonSerializer>(get_class());
        }
    } // namespace JsonSerializer
} // namespace app::classes::types
