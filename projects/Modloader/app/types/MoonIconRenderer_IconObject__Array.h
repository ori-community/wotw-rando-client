#pragma once
#include <Modloader/app/structs/MoonIconRenderer_IconObject__Array.h>
#include <Modloader/app/structs/MoonIconRenderer_IconObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_IconObject__Array {
        inline app::MoonIconRenderer_IconObject__Array__Class** type_info() {
            static app::MoonIconRenderer_IconObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonIconRenderer_IconObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonIconRenderer_IconObject__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer_IconObject__Array__Class>(type_info(), "CatlikeCoding.TextBox", "MoonIconRenderer+IconObject[]");
        }
        inline app::MoonIconRenderer_IconObject__Array* create() {
            return il2cpp::create_object<app::MoonIconRenderer_IconObject__Array>(get_class());
        }
    } // namespace MoonIconRenderer_IconObject__Array
} // namespace app::classes::types
