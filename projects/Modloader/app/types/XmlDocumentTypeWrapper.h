#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlDocumentTypeWrapper__Class.h>
#include <Modloader/app/structs/XmlDocumentTypeWrapper.h>

namespace app::classes::types {
    namespace XmlDocumentTypeWrapper {
        inline app::XmlDocumentTypeWrapper__Class** type_info = (app::XmlDocumentTypeWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472CE38));
        inline app::XmlDocumentTypeWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlDocumentTypeWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper");
        }
        inline app::XmlDocumentTypeWrapper* create() {
            return il2cpp::create_object<app::XmlDocumentTypeWrapper>(get_class());
        }
    } // namespace XmlDocumentTypeWrapper
} // namespace app::classes::types
