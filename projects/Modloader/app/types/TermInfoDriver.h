#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TermInfoDriver {
        inline app::TermInfoDriver__Class** type_info = (app::TermInfoDriver__Class**)(modloader::win::memory::resolve_rva(0x04758F30));
        inline app::TermInfoDriver__Class* get_class() {
            return il2cpp::get_class<app::TermInfoDriver__Class>(type_info, "System", "TermInfoDriver");
        }
        inline app::TermInfoDriver* create() {
            return il2cpp::create_object<app::TermInfoDriver>(get_class());
        }
    } // namespace TermInfoDriver
} // namespace app::classes::types
