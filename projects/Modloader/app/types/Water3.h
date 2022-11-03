#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Water3 {
        inline app::Water3__Class** type_info = (app::Water3__Class**)(modloader::win::memory::resolve_rva(0x047639A8));
        inline app::Water3__Class* get_class() {
            return il2cpp::get_class<app::Water3__Class>(type_info, "", "Water3");
        }
        inline app::Water3* create() {
            return il2cpp::create_object<app::Water3>(get_class());
        }
    } // namespace Water3
} // namespace app::classes::types
