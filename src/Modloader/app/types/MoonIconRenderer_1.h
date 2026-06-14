#pragma once
#include <Modloader/app/structs/MoonIconRenderer_1.h>
#include <Modloader/app/structs/MoonIconRenderer_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_1 {
        inline app::MoonIconRenderer_1__Class** type_info() {
            static app::MoonIconRenderer_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonIconRenderer_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonIconRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer_1__Class>(type_info(), "Moon.UI", "MoonIconRenderer");
        }
        inline app::MoonIconRenderer_1* create() {
            return il2cpp::create_object<app::MoonIconRenderer_1>(get_class());
        }
    } // namespace MoonIconRenderer_1
} // namespace app::classes::types
