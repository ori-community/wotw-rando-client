#pragma once
#include <Modloader/app/structs/MoonVector2.h>
#include <Modloader/app/structs/MoonVector2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonVector2 {
        inline app::MoonVector2__Class** type_info() {
            static app::MoonVector2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonVector2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonVector2__Class* get_class() {
            return il2cpp::get_class<app::MoonVector2__Class>(type_info(), "Moon", "MoonVector2");
        }
        inline app::MoonVector2* create() {
            return il2cpp::create_object<app::MoonVector2>(get_class());
        }
    } // namespace MoonVector2
} // namespace app::classes::types
