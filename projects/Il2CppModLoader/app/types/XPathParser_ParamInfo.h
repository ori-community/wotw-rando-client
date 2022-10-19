#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XPathParser_ParamInfo {
        inline app::XPathParser_ParamInfo__Class** type_info = (app::XPathParser_ParamInfo__Class**)(modloader::win::memory::resolve_rva(0x04757F68));
        inline app::XPathParser_ParamInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathParser_ParamInfo__Class>(type_info, "MS.Internal.Xml.XPath", "XPathParser", "ParamInfo");
        }
        inline app::XPathParser_ParamInfo* create() {
            return il2cpp::create_object<app::XPathParser_ParamInfo>(get_class());
        }
    } // namespace XPathParser_ParamInfo
} // namespace app::classes::types
