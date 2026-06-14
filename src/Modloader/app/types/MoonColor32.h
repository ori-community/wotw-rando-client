#pragma once
#include <Modloader/app/structs/MoonColor32.h>
#include <Modloader/app/structs/MoonColor32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonColor32 {
        inline app::MoonColor32__Class** type_info() {
            static app::MoonColor32__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonColor32__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonColor32__Class* get_class() {
            return il2cpp::get_class<app::MoonColor32__Class>(type_info(), "Moon", "MoonColor32");
        }
        inline app::MoonColor32* create() {
            return il2cpp::create_object<app::MoonColor32>(get_class());
        }
    } // namespace MoonColor32
} // namespace app::classes::types
