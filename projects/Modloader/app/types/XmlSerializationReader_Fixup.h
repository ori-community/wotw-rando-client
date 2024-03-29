#pragma once
#include <Modloader/app/structs/XmlSerializationReader_Fixup.h>
#include <Modloader/app/structs/XmlSerializationReader_Fixup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_Fixup {
        inline app::XmlSerializationReader_Fixup__Class** type_info() {
            static app::XmlSerializationReader_Fixup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReader_Fixup__Class**)(modloader::win::memory::resolve_rva(0x04708448));
            }
            return cache;
        }
        inline app::XmlSerializationReader_Fixup__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_Fixup__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReader", "Fixup");
        }
        inline app::XmlSerializationReader_Fixup* create() {
            return il2cpp::create_object<app::XmlSerializationReader_Fixup>(get_class());
        }
    } // namespace XmlSerializationReader_Fixup
} // namespace app::classes::types
