#pragma once
#include <Modloader/app/structs/MoonIconRenderer__Array.h>
#include <Modloader/app/structs/MoonIconRenderer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer__Array {
        inline app::MoonIconRenderer__Array__Class** type_info() {
            static app::MoonIconRenderer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonIconRenderer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonIconRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer__Array__Class>(type_info(), "CatlikeCoding.TextBox", "MoonIconRenderer[]");
        }
        inline app::MoonIconRenderer__Array* create() {
            return il2cpp::create_object<app::MoonIconRenderer__Array>(get_class());
        }
    } // namespace MoonIconRenderer__Array
} // namespace app::classes::types
