#pragma once
#include <Modloader/app/structs/MoonShort.h>
#include <Modloader/app/structs/MoonShort__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonShort {
        inline app::MoonShort__Class** type_info() {
            static app::MoonShort__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonShort__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonShort__Class* get_class() {
            return il2cpp::get_class<app::MoonShort__Class>(type_info(), "Moon", "MoonShort");
        }
        inline app::MoonShort* create() {
            return il2cpp::create_object<app::MoonShort>(get_class());
        }
    } // namespace MoonShort
} // namespace app::classes::types
