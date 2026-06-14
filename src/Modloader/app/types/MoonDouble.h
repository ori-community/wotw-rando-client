#pragma once
#include <Modloader/app/structs/MoonDouble.h>
#include <Modloader/app/structs/MoonDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDouble {
        inline app::MoonDouble__Class** type_info() {
            static app::MoonDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonDouble__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonDouble__Class* get_class() {
            return il2cpp::get_class<app::MoonDouble__Class>(type_info(), "Moon", "MoonDouble");
        }
        inline app::MoonDouble* create() {
            return il2cpp::create_object<app::MoonDouble>(get_class());
        }
    } // namespace MoonDouble
} // namespace app::classes::types
