#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectReader__Class** type_info;
        inline app::ObjectReader__Class* get_class() {
            return il2cpp::get_class<app::ObjectReader__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
        }
        inline app::ObjectReader* create() {
            return il2cpp::create_object<app::ObjectReader>(get_class());
        }
    } // namespace ObjectReader
} // namespace app::classes::types
