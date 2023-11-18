#pragma once
#include <Modloader/app/structs/PhotoFilter.h>
#include <Modloader/app/structs/PhotoFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhotoFilter {
        inline app::PhotoFilter__Class** type_info() {
            static app::PhotoFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhotoFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhotoFilter__Class* get_class() {
            return il2cpp::get_class<app::PhotoFilter__Class>(type_info(), "Colorful", "PhotoFilter");
        }
        inline app::PhotoFilter* create() {
            return il2cpp::create_object<app::PhotoFilter>(get_class());
        }
    } // namespace PhotoFilter
} // namespace app::classes::types
