#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HeaderInfoTable {
        inline app::HeaderInfoTable__Class** type_info = (app::HeaderInfoTable__Class**)(modloader::win::memory::resolve_rva(0x04744EB0));
        inline app::HeaderInfoTable__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfoTable__Class>(type_info, "System.Net", "HeaderInfoTable");
        }
        inline app::HeaderInfoTable* create() {
            return il2cpp::create_object<app::HeaderInfoTable>(get_class());
        }
    } // namespace HeaderInfoTable
} // namespace app::classes::types
