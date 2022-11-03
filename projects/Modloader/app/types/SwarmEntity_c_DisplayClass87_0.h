#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmEntity_c_DisplayClass87_0 {
        inline app::SwarmEntity_c_DisplayClass87_0__Class** type_info = (app::SwarmEntity_c_DisplayClass87_0__Class**)(modloader::win::memory::resolve_rva(0x0470D328));
        inline app::SwarmEntity_c_DisplayClass87_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SwarmEntity_c_DisplayClass87_0__Class>(type_info, "", "SwarmEntity", "<>c__DisplayClass87_0");
        }
        inline app::SwarmEntity_c_DisplayClass87_0* create() {
            return il2cpp::create_object<app::SwarmEntity_c_DisplayClass87_0>(get_class());
        }
    } // namespace SwarmEntity_c_DisplayClass87_0
} // namespace app::classes::types
