#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XPathNodePageInfo__Class.h>
#include <Modloader/app/structs/XPathNodePageInfo.h>

namespace app::classes::types {
    namespace XPathNodePageInfo {
        namespace {
            inline app::XPathNodePageInfo__Class* type_info_ref = nullptr;
        }
        inline app::XPathNodePageInfo__Class** type_info = &type_info_ref;
        inline app::XPathNodePageInfo__Class* get_class() {
            return il2cpp::get_class<app::XPathNodePageInfo__Class>(type_info, "MS.Internal.Xml.Cache", "XPathNodePageInfo");
        }
        inline app::XPathNodePageInfo* create() {
            return il2cpp::create_object<app::XPathNodePageInfo>(get_class());
        }
    } // namespace XPathNodePageInfo
} // namespace app::classes::types
