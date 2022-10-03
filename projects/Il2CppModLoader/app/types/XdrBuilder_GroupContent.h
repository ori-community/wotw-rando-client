#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_GroupContent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_GroupContent__Class** type_info;
        inline app::XdrBuilder_GroupContent__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_GroupContent__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "GroupContent");
        }
        inline app::XdrBuilder_GroupContent* create() {
            return il2cpp::create_object<app::XdrBuilder_GroupContent>(get_class());
        }
    } // namespace XdrBuilder_GroupContent
} // namespace app::classes::types
