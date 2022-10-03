#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XObjectChangeAnnotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XObjectChangeAnnotation__Class** type_info;
        inline app::XObjectChangeAnnotation__Class* get_class() {
            return il2cpp::get_class<app::XObjectChangeAnnotation__Class>(type_info, "System.Xml.Linq", "XObjectChangeAnnotation");
        }
        inline app::XObjectChangeAnnotation* create() {
            return il2cpp::create_object<app::XObjectChangeAnnotation>(get_class());
        }
    } // namespace XObjectChangeAnnotation
} // namespace app::classes::types
