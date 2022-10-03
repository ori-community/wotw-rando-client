#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_DeclBaseInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_DeclBaseInfo__Class** type_info;
        inline app::XdrBuilder_DeclBaseInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_DeclBaseInfo__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "DeclBaseInfo");
        }
        inline app::XdrBuilder_DeclBaseInfo* create() {
            return il2cpp::create_object<app::XdrBuilder_DeclBaseInfo>(get_class());
        }
    } // namespace XdrBuilder_DeclBaseInfo
} // namespace app::classes::types
