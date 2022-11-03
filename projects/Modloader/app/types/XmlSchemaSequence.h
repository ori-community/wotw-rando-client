#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSequence {
        inline app::XmlSchemaSequence__Class** type_info = (app::XmlSchemaSequence__Class**)(modloader::win::memory::resolve_rva(0x04759A68));
        inline app::XmlSchemaSequence__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSequence__Class>(type_info, "System.Xml.Schema", "XmlSchemaSequence");
        }
        inline app::XmlSchemaSequence* create() {
            return il2cpp::create_object<app::XmlSchemaSequence>(get_class());
        }
    } // namespace XmlSchemaSequence
} // namespace app::classes::types
