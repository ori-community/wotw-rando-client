#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup__Class.h>
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup.h>

namespace app::classes::types {
    namespace XmlSerializationReader_CollectionFixup {
        inline app::XmlSerializationReader_CollectionFixup__Class** type_info = (app::XmlSerializationReader_CollectionFixup__Class**)(modloader::win::memory::resolve_rva(0x04712010));
        inline app::XmlSerializationReader_CollectionFixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_CollectionFixup__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader", "CollectionFixup");
        }
        inline app::XmlSerializationReader_CollectionFixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_CollectionFixup>(get_class());
        }
    } // namespace XmlSerializationReader_CollectionFixup
} // namespace app::classes::types
