#pragma once
#include <Modloader/app/structs/SmallXmlParser_IAttrList.h>
#include <Modloader/app/structs/SmallXmlParser_IAttrList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParser_IAttrList {
        inline app::SmallXmlParser_IAttrList__Class** type_info() {
            static app::SmallXmlParser_IAttrList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmallXmlParser_IAttrList__Class**)(modloader::win::memory::resolve_rva(0x04707FA8));
            }
            return cache;
        }
        inline app::SmallXmlParser_IAttrList__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallXmlParser_IAttrList__Class>(type_info(), "Mono.Xml", "SmallXmlParser", "IAttrList");
        }
    } // namespace SmallXmlParser_IAttrList
} // namespace app::classes::types
