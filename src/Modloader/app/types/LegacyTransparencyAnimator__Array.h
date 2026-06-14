#pragma once
#include <Modloader/app/structs/LegacyTransparencyAnimator__Array.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator__Array {
        inline app::LegacyTransparencyAnimator__Array__Class** type_info() {
            static app::LegacyTransparencyAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTransparencyAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTransparencyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparencyAnimator__Array__Class>(type_info(), "", "LegacyTransparencyAnimator[]");
        }
        inline app::LegacyTransparencyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator__Array>(get_class());
        }
    } // namespace LegacyTransparencyAnimator__Array
} // namespace app::classes::types
