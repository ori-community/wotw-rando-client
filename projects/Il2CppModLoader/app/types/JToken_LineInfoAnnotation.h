#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JToken_LineInfoAnnotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JToken_LineInfoAnnotation__Class** type_info;
        inline app::JToken_LineInfoAnnotation__Class* get_class() {
            return il2cpp::get_nested_class<app::JToken_LineInfoAnnotation__Class>(type_info, "Newtonsoft.Json.Linq", "JToken", "LineInfoAnnotation");
        }
        inline app::JToken_LineInfoAnnotation* create() {
            return il2cpp::create_object<app::JToken_LineInfoAnnotation>(get_class());
        }
    } // namespace JToken_LineInfoAnnotation
} // namespace app::classes::types
