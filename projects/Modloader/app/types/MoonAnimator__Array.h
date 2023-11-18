#pragma once
#include <Modloader/app/structs/MoonAnimator__Array.h>
#include <Modloader/app/structs/MoonAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator__Array {
        inline app::MoonAnimator__Array__Class** type_info() {
            static app::MoonAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator__Array__Class>(type_info(), "Moon", "MoonAnimator[]");
        }
        inline app::MoonAnimator__Array* create() {
            return il2cpp::create_object<app::MoonAnimator__Array>(get_class());
        }
    } // namespace MoonAnimator__Array
} // namespace app::classes::types
