#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaSimpleContentExtension {
        inline app::XmlSchemaSimpleContentExtension__Class** type_info = (app::XmlSchemaSimpleContentExtension__Class**)(modloader::win::memory::resolve_rva(0x0473A338));
        inline app::XmlSchemaSimpleContentExtension__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaSimpleContentExtension__Class>(type_info, "System.Xml.Schema", "XmlSchemaSimpleContentExtension");
        }
        inline app::XmlSchemaSimpleContentExtension* create() {
            return il2cpp::create_object<app::XmlSchemaSimpleContentExtension>(get_class());
        }
    } // namespace XmlSchemaSimpleContentExtension
} // namespace app::classes::types
