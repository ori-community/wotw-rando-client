#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseUriAnnotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseUriAnnotation__Class** type_info;
        inline app::BaseUriAnnotation__Class* get_class() {
            return il2cpp::get_class<app::BaseUriAnnotation__Class>(type_info, "System.Xml.Linq", "BaseUriAnnotation");
        }
        inline app::BaseUriAnnotation* create() {
            return il2cpp::create_object<app::BaseUriAnnotation>(get_class());
        }
    } // namespace BaseUriAnnotation
} // namespace app::classes::types
