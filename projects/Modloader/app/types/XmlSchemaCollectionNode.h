#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSchemaCollectionNode__Class.h>
#include <Modloader/app/structs/XmlSchemaCollectionNode.h>

namespace app::classes::types {
    namespace XmlSchemaCollectionNode {
        inline app::XmlSchemaCollectionNode__Class** type_info = (app::XmlSchemaCollectionNode__Class**)(modloader::win::memory::resolve_rva(0x04708AC8));
        inline app::XmlSchemaCollectionNode__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaCollectionNode__Class>(type_info, "System.Xml.Schema", "XmlSchemaCollectionNode");
        }
        inline app::XmlSchemaCollectionNode* create() {
            return il2cpp::create_object<app::XmlSchemaCollectionNode>(get_class());
        }
    } // namespace XmlSchemaCollectionNode
} // namespace app::classes::types
