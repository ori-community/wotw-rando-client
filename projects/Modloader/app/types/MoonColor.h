#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonColor {
        inline app::MoonColor__Class** type_info = (app::MoonColor__Class**)(modloader::win::memory::resolve_rva(0x04734E50));
        inline app::MoonColor__Class* get_class() {
            return il2cpp::get_class<app::MoonColor__Class>(type_info, "Moon", "MoonColor");
        }
        inline app::MoonColor* create() {
            return il2cpp::create_object<app::MoonColor>(get_class());
        }
    } // namespace MoonColor
} // namespace app::classes::types
