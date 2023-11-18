#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter_ElementScope__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_ElementScope__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_ElementScope__Array {
        inline app::XmlWellFormedWriter_ElementScope__Array__Class** type_info() {
            static app::XmlWellFormedWriter_ElementScope__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlWellFormedWriter_ElementScope__Array__Class**)(modloader::win::memory::resolve_rva(0x047432A0));
            }
            return cache;
        }
        inline app::XmlWellFormedWriter_ElementScope__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter_ElementScope__Array__Class>(type_info(), "System.Xml", "XmlWellFormedWriter+ElementScope[]");
        }
        inline app::XmlWellFormedWriter_ElementScope__Array* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_ElementScope__Array>(get_class());
        }
    } // namespace XmlWellFormedWriter_ElementScope__Array
} // namespace app::classes::types
