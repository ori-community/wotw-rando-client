#pragma once
#include <Modloader/app/structs/Tonemapping_AdaptiveTexSize__Enum.h>
#include <Modloader/app/structs/Tonemapping_AdaptiveTexSize__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tonemapping_AdaptiveTexSize__Enum {
        inline app::Tonemapping_AdaptiveTexSize__Enum__Class** type_info() {
            static app::Tonemapping_AdaptiveTexSize__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tonemapping_AdaptiveTexSize__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tonemapping_AdaptiveTexSize__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tonemapping_AdaptiveTexSize__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Tonemapping", "AdaptiveTexSize");
        }
        inline app::Tonemapping_AdaptiveTexSize__Enum* create() {
            return il2cpp::create_object<app::Tonemapping_AdaptiveTexSize__Enum>(get_class());
        }
    } // namespace Tonemapping_AdaptiveTexSize__Enum
} // namespace app::classes::types
