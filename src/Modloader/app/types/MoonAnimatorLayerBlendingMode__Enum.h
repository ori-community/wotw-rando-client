#pragma once
#include <Modloader/app/structs/MoonAnimatorLayerBlendingMode__Enum.h>
#include <Modloader/app/structs/MoonAnimatorLayerBlendingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerBlendingMode__Enum {
        inline app::MoonAnimatorLayerBlendingMode__Enum__Class** type_info() {
            static app::MoonAnimatorLayerBlendingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimatorLayerBlendingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimatorLayerBlendingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerBlendingMode__Enum__Class>(type_info(), "Moon", "MoonAnimatorLayerBlendingMode");
        }
        inline app::MoonAnimatorLayerBlendingMode__Enum* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerBlendingMode__Enum>(get_class());
        }
    } // namespace MoonAnimatorLayerBlendingMode__Enum
} // namespace app::classes::types
