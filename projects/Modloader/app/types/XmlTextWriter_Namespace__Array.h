#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextWriter_Namespace__Array {
        inline app::XmlTextWriter_Namespace__Array__Class** type_info = (app::XmlTextWriter_Namespace__Array__Class**)(modloader::win::memory::resolve_rva(0x047750F8));
        inline app::XmlTextWriter_Namespace__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriter_Namespace__Array__Class>(type_info, "System.Xml", "XmlTextWriter+Namespace[]");
        }
        inline app::XmlTextWriter_Namespace__Array* create() {
            return il2cpp::create_object<app::XmlTextWriter_Namespace__Array>(get_class());
        }
    } // namespace XmlTextWriter_Namespace__Array
} // namespace app::classes::types
