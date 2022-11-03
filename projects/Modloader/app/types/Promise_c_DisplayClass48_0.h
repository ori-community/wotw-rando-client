#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Promise_c_DisplayClass48_0 {
        inline app::Promise_c_DisplayClass48_0__Class** type_info = (app::Promise_c_DisplayClass48_0__Class**)(modloader::win::memory::resolve_rva(0x04783A10));
        inline app::Promise_c_DisplayClass48_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_c_DisplayClass48_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise", "<>c__DisplayClass48_0");
        }
        inline app::Promise_c_DisplayClass48_0* create() {
            return il2cpp::create_object<app::Promise_c_DisplayClass48_0>(get_class());
        }
    } // namespace Promise_c_DisplayClass48_0
} // namespace app::classes::types
