#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameTable_Entry__Array {
        inline app::NameTable_Entry__Array__Class** type_info = (app::NameTable_Entry__Array__Class**)(modloader::win::memory::resolve_rva(0x04768708));
        inline app::NameTable_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::NameTable_Entry__Array__Class>(type_info, "System.Xml", "NameTable+Entry[]");
        }
        inline app::NameTable_Entry__Array* create() {
            return il2cpp::create_object<app::NameTable_Entry__Array>(get_class());
        }
    } // namespace NameTable_Entry__Array
} // namespace app::classes::types
