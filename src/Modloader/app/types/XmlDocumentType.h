#pragma once
#include <Modloader/app/structs/XmlDocumentType.h>
#include <Modloader/app/structs/XmlDocumentType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDocumentType {
        inline app::XmlDocumentType__Class** type_info() {
            static app::XmlDocumentType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDocumentType__Class**)(modloader::win::memory::resolve_rva(0x04759590));
            }
            return cache;
        }
        inline app::XmlDocumentType__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentType__Class>(type_info(), "System.Xml", "XmlDocumentType");
        }
        inline app::XmlDocumentType* create() {
            return il2cpp::create_object<app::XmlDocumentType>(get_class());
        }
    } // namespace XmlDocumentType
} // namespace app::classes::types
