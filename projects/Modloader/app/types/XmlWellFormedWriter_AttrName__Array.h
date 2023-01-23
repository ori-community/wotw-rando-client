#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName__Array__Class.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName__Array.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttrName__Array {
        inline app::XmlWellFormedWriter_AttrName__Array__Class** type_info = (app::XmlWellFormedWriter_AttrName__Array__Class**)(modloader::win::memory::resolve_rva(0x0473DF48));
        inline app::XmlWellFormedWriter_AttrName__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter_AttrName__Array__Class>(type_info, "System.Xml", "XmlWellFormedWriter+AttrName[]");
        }
        inline app::XmlWellFormedWriter_AttrName__Array* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttrName__Array>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttrName__Array
} // namespace app::classes::types
