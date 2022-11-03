#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProcessWindowStyle__Enum {
        inline app::ProcessWindowStyle__Enum__Class** type_info = (app::ProcessWindowStyle__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474A000));
        inline app::ProcessWindowStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::ProcessWindowStyle__Enum__Class>(type_info, "System.Diagnostics", "ProcessWindowStyle");
        }
        inline app::ProcessWindowStyle__Enum* create() {
            return il2cpp::create_object<app::ProcessWindowStyle__Enum>(get_class());
        }
    } // namespace ProcessWindowStyle__Enum
} // namespace app::classes::types
