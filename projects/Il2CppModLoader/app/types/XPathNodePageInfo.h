#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathNodePageInfo {
        namespace {
            app::XPathNodePageInfo__Class* type_info_ref = nullptr;
        }
        app::XPathNodePageInfo__Class** type_info = &type_info_ref;
        inline app::XPathNodePageInfo__Class* get_class() {
            return il2cpp::get_class<app::XPathNodePageInfo__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNodePageInfo");
        }
        inline app::XPathNodePageInfo* create() {
            return il2cpp::create_object<app::XPathNodePageInfo>(get_class());
        }
    } // namespace XPathNodePageInfo
} // namespace app::classes::types
