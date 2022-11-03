#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XDocumentType {
        inline app::XDocumentType__Class** type_info = (app::XDocumentType__Class**)(modloader::win::memory::resolve_rva(0x047056F8));
        inline app::XDocumentType__Class* get_class() {
            return il2cpp::get_class<app::XDocumentType__Class>(type_info, "System.Xml.Linq", "XDocumentType");
        }
        inline app::XDocumentType* create() {
            return il2cpp::create_object<app::XDocumentType>(get_class());
        }
    } // namespace XDocumentType
} // namespace app::classes::types
