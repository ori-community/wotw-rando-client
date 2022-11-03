#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDebug {
        inline app::MoonDebug__Class** type_info = (app::MoonDebug__Class**)(modloader::win::memory::resolve_rva(0x047640F8));
        inline app::MoonDebug__Class* get_class() {
            return il2cpp::get_class<app::MoonDebug__Class>(type_info, "Moon", "MoonDebug");
        }
        inline app::MoonDebug* create() {
            return il2cpp::create_object<app::MoonDebug>(get_class());
        }
    } // namespace MoonDebug
} // namespace app::classes::types
