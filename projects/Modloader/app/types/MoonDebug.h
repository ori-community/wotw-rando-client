#pragma once
#include <Modloader/app/structs/MoonDebug.h>
#include <Modloader/app/structs/MoonDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDebug {
        inline app::MoonDebug__Class** type_info() {
            static app::MoonDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonDebug__Class**)(modloader::win::memory::resolve_rva(0x047640F8));
            }
            return cache;
        }
        inline app::MoonDebug__Class* get_class() {
            return il2cpp::get_class<app::MoonDebug__Class>(type_info(), "Moon", "MoonDebug");
        }
        inline app::MoonDebug* create() {
            return il2cpp::create_object<app::MoonDebug>(get_class());
        }
    } // namespace MoonDebug
} // namespace app::classes::types
