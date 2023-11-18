#pragma once
#include <Modloader/app/structs/Wiggle.h>
#include <Modloader/app/structs/Wiggle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wiggle {
        inline app::Wiggle__Class** type_info() {
            static app::Wiggle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Wiggle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Wiggle__Class* get_class() {
            return il2cpp::get_class<app::Wiggle__Class>(type_info(), "Colorful", "Wiggle");
        }
        inline app::Wiggle* create() {
            return il2cpp::create_object<app::Wiggle>(get_class());
        }
    } // namespace Wiggle
} // namespace app::classes::types
