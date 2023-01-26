#pragma once
#include <Modloader/app/structs/IXmlDocumentType.h>
#include <Modloader/app/structs/IXmlDocumentType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlDocumentType {
        inline app::IXmlDocumentType__Class** type_info() {
            static app::IXmlDocumentType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlDocumentType__Class**)(modloader::win::memory::resolve_rva(0x0478F510));
            }
            return cache;
        }
        inline app::IXmlDocumentType__Class* get_class() {
            return il2cpp::get_class<app::IXmlDocumentType__Class>(type_info(), "Newtonsoft.Json.Converters", "IXmlDocumentType");
        }
    } // namespace IXmlDocumentType
} // namespace app::classes::types
