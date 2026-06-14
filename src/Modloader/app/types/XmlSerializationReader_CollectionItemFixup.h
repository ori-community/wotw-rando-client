#pragma once
#include <Modloader/app/structs/XmlSerializationReader_CollectionItemFixup.h>
#include <Modloader/app/structs/XmlSerializationReader_CollectionItemFixup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_CollectionItemFixup {
        inline app::XmlSerializationReader_CollectionItemFixup__Class** type_info() {
            static app::XmlSerializationReader_CollectionItemFixup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReader_CollectionItemFixup__Class**)(modloader::win::memory::resolve_rva(0x0477D008));
            }
            return cache;
        }
        inline app::XmlSerializationReader_CollectionItemFixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_CollectionItemFixup__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReader", "CollectionItemFixup");
        }
        inline app::XmlSerializationReader_CollectionItemFixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_CollectionItemFixup>(get_class());
        }
    } // namespace XmlSerializationReader_CollectionItemFixup
} // namespace app::classes::types
