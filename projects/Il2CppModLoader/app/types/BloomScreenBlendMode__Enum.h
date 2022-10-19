#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BloomScreenBlendMode__Enum {
        namespace {
            inline app::BloomScreenBlendMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BloomScreenBlendMode__Enum__Class** type_info = &type_info_ref;
        inline app::BloomScreenBlendMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BloomScreenBlendMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "BloomScreenBlendMode");
        }
        inline app::BloomScreenBlendMode__Enum* create() {
            return il2cpp::create_object<app::BloomScreenBlendMode__Enum>(get_class());
        }
    } // namespace BloomScreenBlendMode__Enum
} // namespace app::classes::types
