#pragma once
#include <Modloader/app/structs/XmlSchemaSequence.h>
#include <Modloader/app/structs/XmlSchemaSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchemaSequence {
        inline app::XmlSchemaSequence__Class** type_info() {
            static app::XmlSchemaSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchemaSequence__Class**)(modloader::win::memory::resolve_rva(0x04759A68));
            }
            return cache;
        }
        inline app::XmlSchemaSequence__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSequence__Class>(type_info(), "System.Xml.Schema", "XmlSchemaSequence");
        }
        inline app::XmlSchemaSequence* create() {
            return il2cpp::create_object<app::XmlSchemaSequence>(get_class());
        }
    } // namespace XmlSchemaSequence
} // namespace app::classes::types
