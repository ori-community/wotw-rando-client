#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaAnnotated__Class.h>
#include <Modloader/app/structs/XmlSchemaAnnotated.h>

namespace app::classes::types {
    namespace XmlSchemaAnnotated {
        inline app::XmlSchemaAnnotated__Class** type_info = (app::XmlSchemaAnnotated__Class**)(modloader::win::memory::resolve_rva(0x04743F48));
        inline app::XmlSchemaAnnotated__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaAnnotated__Class>(type_info, "System.Xml.Schema", "XmlSchemaAnnotated");
        }
        inline app::XmlSchemaAnnotated* create() {
            return il2cpp::create_object<app::XmlSchemaAnnotated>(get_class());
        }
    } // namespace XmlSchemaAnnotated
} // namespace app::classes::types
