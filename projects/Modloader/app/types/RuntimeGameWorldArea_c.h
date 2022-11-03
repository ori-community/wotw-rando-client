#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeGameWorldArea_c {
        inline app::RuntimeGameWorldArea_c__Class** type_info = (app::RuntimeGameWorldArea_c__Class**)(modloader::win::memory::resolve_rva(0x047888B8));
        inline app::RuntimeGameWorldArea_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeGameWorldArea_c__Class>(type_info, "", "RuntimeGameWorldArea", "<>c");
        }
        inline app::RuntimeGameWorldArea_c* create() {
            return il2cpp::create_object<app::RuntimeGameWorldArea_c>(get_class());
        }
    } // namespace RuntimeGameWorldArea_c
} // namespace app::classes::types
