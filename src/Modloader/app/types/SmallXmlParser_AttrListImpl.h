#pragma once
#include <Modloader/app/structs/SmallXmlParser_AttrListImpl.h>
#include <Modloader/app/structs/SmallXmlParser_AttrListImpl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParser_AttrListImpl {
        inline app::SmallXmlParser_AttrListImpl__Class** type_info() {
            static app::SmallXmlParser_AttrListImpl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SmallXmlParser_AttrListImpl__Class**)(modloader::win::memory::resolve_rva(0x0474D098));
            }
            return cache;
        }
        inline app::SmallXmlParser_AttrListImpl__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallXmlParser_AttrListImpl__Class>(type_info(), "Mono.Xml", "SmallXmlParser", "AttrListImpl");
        }
        inline app::SmallXmlParser_AttrListImpl* create() {
            return il2cpp::create_object<app::SmallXmlParser_AttrListImpl>(get_class());
        }
    } // namespace SmallXmlParser_AttrListImpl
} // namespace app::classes::types
