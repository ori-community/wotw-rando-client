#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameTable__Class.h>
#include <Modloader/app/structs/NameTable.h>

namespace app::classes::types {
    namespace NameTable {
        inline app::NameTable__Class** type_info = (app::NameTable__Class**)(modloader::win::memory::resolve_rva(0x047645A8));
        inline app::NameTable__Class* get_class() {
            return il2cpp::get_class<app::NameTable__Class>(type_info, "System.Xml", "NameTable");
        }
        inline app::NameTable* create() {
            return il2cpp::create_object<app::NameTable>(get_class());
        }
    } // namespace NameTable
} // namespace app::classes::types
