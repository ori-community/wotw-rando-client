#pragma once
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_ClipInstance__Array {
        inline app::MoonAnimator_ClipInstance__Array__Class** type_info() {
            static app::MoonAnimator_ClipInstance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_ClipInstance__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_ClipInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_ClipInstance__Array__Class>(type_info(), "Moon", "MoonAnimator+ClipInstance[]");
        }
        inline app::MoonAnimator_ClipInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_ClipInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_ClipInstance__Array
} // namespace app::classes::types
