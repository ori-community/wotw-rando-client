#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathParser_ParamInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathParser_ParamInfo__Class** type_info;
        inline app::XPathParser_ParamInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathParser_ParamInfo__Class>(type_info, "MS.Internal.Xml.XPath", "XPathParser", "ParamInfo");
        }
        inline app::XPathParser_ParamInfo* create() {
            return il2cpp::create_object<app::XPathParser_ParamInfo>(get_class());
        }
    } // namespace XPathParser_ParamInfo
} // namespace app::classes::types
