#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LineInfoAnnotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LineInfoAnnotation__Class** type_info;
        inline app::LineInfoAnnotation__Class* get_class() {
            return il2cpp::get_class<app::LineInfoAnnotation__Class>(type_info, "System.Xml.Linq", "LineInfoAnnotation");
        }
        inline app::LineInfoAnnotation* create() {
            return il2cpp::create_object<app::LineInfoAnnotation>(get_class());
        }
    } // namespace LineInfoAnnotation
} // namespace app::classes::types
