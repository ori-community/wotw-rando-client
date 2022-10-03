#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SunShafts_ShaftsScreenBlendMode__Enum {
        namespace {
            app::SunShafts_ShaftsScreenBlendMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SunShafts_ShaftsScreenBlendMode__Enum__Class** type_info = &type_info_ref;
        inline app::SunShafts_ShaftsScreenBlendMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SunShafts_ShaftsScreenBlendMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "SunShafts", "ShaftsScreenBlendMode");
        }
        inline app::SunShafts_ShaftsScreenBlendMode__Enum* create() {
            return il2cpp::create_object<app::SunShafts_ShaftsScreenBlendMode__Enum>(get_class());
        }
    } // namespace SunShafts_ShaftsScreenBlendMode__Enum
} // namespace app::classes::types
