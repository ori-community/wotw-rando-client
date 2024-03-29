#pragma once
#include <Modloader/app/structs/XmlSchema__Array.h>
#include <Modloader/app/structs/XmlSchema__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSchema__Array {
        inline app::XmlSchema__Array__Class** type_info() {
            static app::XmlSchema__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSchema__Array__Class**)(modloader::win::memory::resolve_rva(0x0479A2B8));
            }
            return cache;
        }
        inline app::XmlSchema__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSchema__Array__Class>(type_info(), "System.Xml.Schema", "XmlSchema[]");
        }
        inline app::XmlSchema__Array* create() {
            return il2cpp::create_object<app::XmlSchema__Array>(get_class());
        }
    } // namespace XmlSchema__Array
} // namespace app::classes::types
