#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeData__Class** type_info;
        inline app::TypeData__Class* get_class() {
            return il2cpp::get_class<app::TypeData__Class>(type_info, "System.Xml.Serialization", "TypeData");
        }
        inline app::TypeData* create() {
            return il2cpp::create_object<app::TypeData>(get_class());
        }
    } // namespace TypeData
} // namespace app::classes::types
