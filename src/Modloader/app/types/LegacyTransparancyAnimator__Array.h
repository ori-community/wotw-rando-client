#pragma once
#include <Modloader/app/structs/LegacyTransparancyAnimator__Array.h>
#include <Modloader/app/structs/LegacyTransparancyAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparancyAnimator__Array {
        inline app::LegacyTransparancyAnimator__Array__Class** type_info() {
            static app::LegacyTransparancyAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTransparancyAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTransparancyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparancyAnimator__Array__Class>(type_info(), "", "LegacyTransparancyAnimator[]");
        }
        inline app::LegacyTransparancyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyTransparancyAnimator__Array>(get_class());
        }
    } // namespace LegacyTransparancyAnimator__Array
} // namespace app::classes::types
