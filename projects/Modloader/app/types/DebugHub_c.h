#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugHub_c {
        inline app::DebugHub_c__Class** type_info = (app::DebugHub_c__Class**)(modloader::win::memory::resolve_rva(0x04764138));
        inline app::DebugHub_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugHub_c__Class>(type_info, "", "DebugHub", "<>c");
        }
        inline app::DebugHub_c* create() {
            return il2cpp::create_object<app::DebugHub_c>(get_class());
        }
    } // namespace DebugHub_c
} // namespace app::classes::types
