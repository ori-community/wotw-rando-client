#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeContent__Class.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeContent.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleTypeContent {
        inline app::XmlSchemaSimpleTypeContent__Class** type_info = (app::XmlSchemaSimpleTypeContent__Class**)(modloader::win::memory::resolve_rva(0x04772D40));
        inline app::XmlSchemaSimpleTypeContent__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleTypeContent__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleTypeContent");
        }
        inline app::XmlSchemaSimpleTypeContent* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleTypeContent>(get_class());
        }
    } // namespace XmlSchemaSimpleTypeContent
} // namespace app::classes::types
