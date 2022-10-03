#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdBuilder_XsdEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdBuilder_XsdEntry__Array__Class** type_info;
        inline app::XsdBuilder_XsdEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::XsdBuilder_XsdEntry__Array__Class>(type_info, "System.Xml.Schema", "XsdBuilder+XsdEntry[]");
        }
        inline app::XsdBuilder_XsdEntry__Array* create() {
            return il2cpp::create_object<app::XsdBuilder_XsdEntry__Array>(get_class());
        }
    } // namespace XsdBuilder_XsdEntry__Array
} // namespace app::classes::types
