#pragma once
#include <Modloader/app/structs/MixedLightingMode__Enum.h>
#include <Modloader/app/structs/MixedLightingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MixedLightingMode__Enum {
        inline app::MixedLightingMode__Enum__Class** type_info() {
            static app::MixedLightingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MixedLightingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MixedLightingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MixedLightingMode__Enum__Class>(type_info(), "UnityEngine", "MixedLightingMode");
        }
        inline app::MixedLightingMode__Enum* create() {
            return il2cpp::create_object<app::MixedLightingMode__Enum>(get_class());
        }
    } // namespace MixedLightingMode__Enum
} // namespace app::classes::types
