#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmallXmlParser_AttrListImpl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SmallXmlParser_AttrListImpl__Class** type_info;
        inline app::SmallXmlParser_AttrListImpl__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallXmlParser_AttrListImpl__Class>(type_info, "Mono.Xml", "SmallXmlParser", "AttrListImpl");
        }
        inline app::SmallXmlParser_AttrListImpl* create() {
            return il2cpp::create_object<app::SmallXmlParser_AttrListImpl>(get_class());
        }
    } // namespace SmallXmlParser_AttrListImpl
} // namespace app::classes::types
