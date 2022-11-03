#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Items {
        inline app::Items__Class** type_info = (app::Items__Class**)(modloader::win::memory::resolve_rva(0x0475CB78));
        inline app::Items__Class* get_class() {
            return il2cpp::get_class<app::Items__Class>(type_info, "Game", "Items");
        }
        inline app::Items* create() {
            return il2cpp::create_object<app::Items>(get_class());
        }
    } // namespace Items
} // namespace app::classes::types
