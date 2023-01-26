#pragma once
#include <Modloader/app/structs/XmlNode__Array.h>
#include <Modloader/app/structs/XmlNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNode__Array {
        inline app::XmlNode__Array__Class** type_info() {
            static app::XmlNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNode__Array__Class**)(modloader::win::memory::resolve_rva(0x04707B78));
            }
            return cache;
        }
        inline app::XmlNode__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNode__Array__Class>(type_info(), "System.Xml", "XmlNode[]");
        }
        inline app::XmlNode__Array* create() {
            return il2cpp::create_object<app::XmlNode__Array>(get_class());
        }
    } // namespace XmlNode__Array
} // namespace app::classes::types
