#pragma once
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup.h>
#include <Modloader/app/structs/XmlSerializationReader_CollectionFixup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_CollectionFixup {
        inline app::XmlSerializationReader_CollectionFixup__Class** type_info() {
            static app::XmlSerializationReader_CollectionFixup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReader_CollectionFixup__Class**)(modloader::win::memory::resolve_rva(0x04712010));
            }
            return cache;
        }
        inline app::XmlSerializationReader_CollectionFixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_CollectionFixup__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReader", "CollectionFixup");
        }
        inline app::XmlSerializationReader_CollectionFixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_CollectionFixup>(get_class());
        }
    } // namespace XmlSerializationReader_CollectionFixup
} // namespace app::classes::types
