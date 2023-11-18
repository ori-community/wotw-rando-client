#pragma once
#include <Modloader/app/structs/XmlTextWriter_Namespace__Array.h>
#include <Modloader/app/structs/XmlTextWriter_Namespace__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_Namespace__Array {
        inline app::XmlTextWriter_Namespace__Array__Class** type_info() {
            static app::XmlTextWriter_Namespace__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextWriter_Namespace__Array__Class**)(modloader::win::memory::resolve_rva(0x047750F8));
            }
            return cache;
        }
        inline app::XmlTextWriter_Namespace__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriter_Namespace__Array__Class>(type_info(), "System.Xml", "XmlTextWriter+Namespace[]");
        }
        inline app::XmlTextWriter_Namespace__Array* create() {
            return il2cpp::create_object<app::XmlTextWriter_Namespace__Array>(get_class());
        }
    } // namespace XmlTextWriter_Namespace__Array
} // namespace app::classes::types
