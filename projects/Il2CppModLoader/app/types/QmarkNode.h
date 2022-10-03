#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QmarkNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QmarkNode__Class** type_info;
        inline app::QmarkNode__Class* get_class() {
            return il2cpp::get_class<app::QmarkNode__Class>(type_info, "System.Xml.Schema", "QmarkNode");
        }
        inline app::QmarkNode* create() {
            return il2cpp::create_object<app::QmarkNode>(get_class());
        }
    } // namespace QmarkNode
} // namespace app::classes::types
