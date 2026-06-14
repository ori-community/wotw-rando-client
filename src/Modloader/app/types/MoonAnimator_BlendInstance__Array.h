#pragma once
#include <Modloader/app/structs/MoonAnimator_BlendInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_BlendInstance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_BlendInstance__Array {
        inline app::MoonAnimator_BlendInstance__Array__Class** type_info() {
            static app::MoonAnimator_BlendInstance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_BlendInstance__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_BlendInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_BlendInstance__Array__Class>(type_info(), "Moon", "MoonAnimator+BlendInstance[]");
        }
        inline app::MoonAnimator_BlendInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_BlendInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_BlendInstance__Array
} // namespace app::classes::types
