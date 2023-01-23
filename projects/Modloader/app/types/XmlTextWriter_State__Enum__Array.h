#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTextWriter_State__Enum__Array__Class.h>
#include <Modloader/app/structs/XmlTextWriter_State__Enum__Array.h>

namespace app::classes::types {
    namespace XmlTextWriter_State__Enum__Array {
        inline app::XmlTextWriter_State__Enum__Array__Class** type_info = (app::XmlTextWriter_State__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x047101C0));
        inline app::XmlTextWriter_State__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriter_State__Enum__Array__Class>(type_info, "System.Xml", "XmlTextWriter+State[]");
        }
        inline app::XmlTextWriter_State__Enum__Array* create() {
            return il2cpp::create_object<app::XmlTextWriter_State__Enum__Array>(get_class());
        }
    } // namespace XmlTextWriter_State__Enum__Array
} // namespace app::classes::types
