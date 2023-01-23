#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializerNamespaces__Class.h>
#include <Modloader/app/structs/XmlSerializerNamespaces.h>

namespace app::classes::types {
    namespace XmlSerializerNamespaces {
        inline app::XmlSerializerNamespaces__Class** type_info = (app::XmlSerializerNamespaces__Class**)(modloader::win::memory::resolve_rva(0x0472E1C8));
        inline app::XmlSerializerNamespaces__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializerNamespaces__Class>(type_info, "System.Xml.Serialization", "XmlSerializerNamespaces");
        }
        inline app::XmlSerializerNamespaces* create() {
            return il2cpp::create_object<app::XmlSerializerNamespaces>(get_class());
        }
    } // namespace XmlSerializerNamespaces
} // namespace app::classes::types
