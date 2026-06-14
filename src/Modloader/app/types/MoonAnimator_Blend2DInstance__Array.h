#pragma once
#include <Modloader/app/structs/MoonAnimator_Blend2DInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_Blend2DInstance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_Blend2DInstance__Array {
        inline app::MoonAnimator_Blend2DInstance__Array__Class** type_info() {
            static app::MoonAnimator_Blend2DInstance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_Blend2DInstance__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_Blend2DInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_Blend2DInstance__Array__Class>(type_info(), "Moon", "MoonAnimator+Blend2DInstance[]");
        }
        inline app::MoonAnimator_Blend2DInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_Blend2DInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_Blend2DInstance__Array
} // namespace app::classes::types
