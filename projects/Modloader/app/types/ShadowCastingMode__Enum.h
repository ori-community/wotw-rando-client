#pragma once
#include <Modloader/app/structs/ShadowCastingMode__Enum.h>
#include <Modloader/app/structs/ShadowCastingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadowCastingMode__Enum {
        inline app::ShadowCastingMode__Enum__Class** type_info() {
            static app::ShadowCastingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShadowCastingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShadowCastingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShadowCastingMode__Enum__Class>(type_info(), "UnityEngine.Rendering", "ShadowCastingMode");
        }
        inline app::ShadowCastingMode__Enum* create() {
            return il2cpp::create_object<app::ShadowCastingMode__Enum>(get_class());
        }
    } // namespace ShadowCastingMode__Enum
} // namespace app::classes::types
