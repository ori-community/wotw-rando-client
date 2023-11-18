#pragma once
#include <Modloader/app/structs/MoonColor.h>
#include <Modloader/app/structs/MoonColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonColor {
        inline app::MoonColor__Class** type_info() {
            static app::MoonColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonColor__Class**)(modloader::win::memory::resolve_rva(0x04734E50));
            }
            return cache;
        }
        inline app::MoonColor__Class* get_class() {
            return il2cpp::get_class<app::MoonColor__Class>(type_info(), "Moon", "MoonColor");
        }
        inline app::MoonColor* create() {
            return il2cpp::create_object<app::MoonColor>(get_class());
        }
    } // namespace MoonColor
} // namespace app::classes::types
