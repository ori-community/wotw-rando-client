#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttributeCollection {
        inline app::XmlAttributeCollection__Class** type_info = (app::XmlAttributeCollection__Class**)(modloader::win::memory::resolve_rva(0x047815B8));
        inline app::XmlAttributeCollection__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeCollection__Class>(type_info, "System.Xml", "XmlAttributeCollection");
        }
        inline app::XmlAttributeCollection* create() {
            return il2cpp::create_object<app::XmlAttributeCollection>(get_class());
        }
    } // namespace XmlAttributeCollection
} // namespace app::classes::types
