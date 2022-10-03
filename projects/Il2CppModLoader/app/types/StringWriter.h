#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringWriter__Class** type_info;
        inline app::StringWriter__Class* get_class() {
            return il2cpp::get_class<app::StringWriter__Class>(type_info, "System.IO", "StringWriter");
        }
        inline app::StringWriter* create() {
            return il2cpp::create_object<app::StringWriter>(get_class());
        }
    } // namespace StringWriter
} // namespace app::classes::types
