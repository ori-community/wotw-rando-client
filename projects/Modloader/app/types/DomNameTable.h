#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DomNameTable__Class.h>
#include <Modloader/app/structs/DomNameTable.h>

namespace app::classes::types {
    namespace DomNameTable {
        inline app::DomNameTable__Class** type_info = (app::DomNameTable__Class**)(modloader::win::memory::resolve_rva(0x04754568));
        inline app::DomNameTable__Class* get_class() {
            return il2cpp::get_class<app::DomNameTable__Class>(type_info, "System.Xml", "DomNameTable");
        }
        inline app::DomNameTable* create() {
            return il2cpp::create_object<app::DomNameTable>(get_class());
        }
    } // namespace DomNameTable
} // namespace app::classes::types
