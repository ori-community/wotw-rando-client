#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixedLightingMode__Enum {
        namespace {
            app::MixedLightingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::MixedLightingMode__Enum__Class** type_info = &type_info_ref;
        inline app::MixedLightingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MixedLightingMode__Enum__Class>(type_info, "UnityEngine", "MixedLightingMode");
        }
        inline app::MixedLightingMode__Enum* create() {
            return il2cpp::create_object<app::MixedLightingMode__Enum>(get_class());
        }
    } // namespace MixedLightingMode__Enum
} // namespace app::classes::types
