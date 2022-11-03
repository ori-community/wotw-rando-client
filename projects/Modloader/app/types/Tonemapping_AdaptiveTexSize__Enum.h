#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tonemapping_AdaptiveTexSize__Enum {
        namespace {
            inline app::Tonemapping_AdaptiveTexSize__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Tonemapping_AdaptiveTexSize__Enum__Class** type_info = &type_info_ref;
        inline app::Tonemapping_AdaptiveTexSize__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tonemapping_AdaptiveTexSize__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "Tonemapping", "AdaptiveTexSize");
        }
        inline app::Tonemapping_AdaptiveTexSize__Enum* create() {
            return il2cpp::create_object<app::Tonemapping_AdaptiveTexSize__Enum>(get_class());
        }
    } // namespace Tonemapping_AdaptiveTexSize__Enum
} // namespace app::classes::types
