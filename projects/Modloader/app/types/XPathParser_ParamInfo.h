#pragma once
#include <Modloader/app/structs/XPathParser_ParamInfo.h>
#include <Modloader/app/structs/XPathParser_ParamInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathParser_ParamInfo {
        inline app::XPathParser_ParamInfo__Class** type_info() {
            static app::XPathParser_ParamInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XPathParser_ParamInfo__Class**)(modloader::win::memory::resolve_rva(0x04757F68));
            }
            return cache;
        }
        inline app::XPathParser_ParamInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XPathParser_ParamInfo__Class>(type_info(), "MS.Internal.Xml.XPath", "XPathParser", "ParamInfo");
        }
        inline app::XPathParser_ParamInfo* create() {
            return il2cpp::create_object<app::XPathParser_ParamInfo>(get_class());
        }
    } // namespace XPathParser_ParamInfo
} // namespace app::classes::types
