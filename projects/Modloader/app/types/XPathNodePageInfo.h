#pragma once
#include <Modloader/app/structs/XPathNodePageInfo.h>
#include <Modloader/app/structs/XPathNodePageInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XPathNodePageInfo {
        inline app::XPathNodePageInfo__Class** type_info() {
            static app::XPathNodePageInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XPathNodePageInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XPathNodePageInfo__Class* get_class() {
            return il2cpp::get_class<app::XPathNodePageInfo__Class>(type_info(), "MS.Internal.Xml.Cache", "XPathNodePageInfo");
        }
        inline app::XPathNodePageInfo* create() {
            return il2cpp::create_object<app::XPathNodePageInfo>(get_class());
        }
    } // namespace XPathNodePageInfo
} // namespace app::classes::types
