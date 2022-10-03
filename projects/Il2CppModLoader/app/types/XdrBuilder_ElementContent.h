#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_ElementContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_ElementContent__Class** type_info;
        inline app::XdrBuilder_ElementContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_ElementContent__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "ElementContent");
        }
        inline app::XdrBuilder_ElementContent* create() {
            return il2cpp::create_object<app::XdrBuilder_ElementContent>(get_class());
        }
    } // namespace XdrBuilder_ElementContent
} // namespace app::classes::types
