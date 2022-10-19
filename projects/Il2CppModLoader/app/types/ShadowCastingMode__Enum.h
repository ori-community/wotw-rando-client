#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShadowCastingMode__Enum {
        namespace {
            inline app::ShadowCastingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ShadowCastingMode__Enum__Class** type_info = &type_info_ref;
        inline app::ShadowCastingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShadowCastingMode__Enum__Class>(type_info, "UnityEngine.Rendering", "ShadowCastingMode");
        }
        inline app::ShadowCastingMode__Enum* create() {
            return il2cpp::create_object<app::ShadowCastingMode__Enum>(get_class());
        }
    } // namespace ShadowCastingMode__Enum
} // namespace app::classes::types
