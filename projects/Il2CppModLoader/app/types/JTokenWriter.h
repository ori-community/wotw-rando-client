#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JTokenWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JTokenWriter__Class** type_info;
        inline app::JTokenWriter__Class* get_class() {
            return il2cpp::get_class<app::JTokenWriter__Class>(type_info, "Newtonsoft.Json.Linq", "JTokenWriter");
        }
        inline app::JTokenWriter* create() {
            return il2cpp::create_object<app::JTokenWriter>(get_class());
        }
    } // namespace JTokenWriter
} // namespace app::classes::types
