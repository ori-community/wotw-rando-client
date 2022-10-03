#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectWriter__Class** type_info;
        inline app::ObjectWriter__Class* get_class() {
            return il2cpp::get_class<app::ObjectWriter__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
        }
        inline app::ObjectWriter* create() {
            return il2cpp::create_object<app::ObjectWriter>(get_class());
        }
    } // namespace ObjectWriter
} // namespace app::classes::types
