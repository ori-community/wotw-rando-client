#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArrayList {
        inline app::ArrayList__Class** type_info = (app::ArrayList__Class**)(modloader::win::memory::resolve_rva(0x0472C508));
        inline app::ArrayList__Class* get_class() {
            return il2cpp::get_class<app::ArrayList__Class>(type_info, "System.Collections", "ArrayList");
        }
        inline app::ArrayList* create() {
            return il2cpp::create_object<app::ArrayList>(get_class());
        }
    } // namespace ArrayList
} // namespace app::classes::types
