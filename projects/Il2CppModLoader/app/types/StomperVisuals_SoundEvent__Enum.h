#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StomperVisuals_SoundEvent__Enum {
        namespace {
            inline app::StomperVisuals_SoundEvent__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StomperVisuals_SoundEvent__Enum__Class** type_info = &type_info_ref;
        inline app::StomperVisuals_SoundEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StomperVisuals_SoundEvent__Enum__Class>(type_info, "", "StomperVisuals", "SoundEvent");
        }
        inline app::StomperVisuals_SoundEvent__Enum* create() {
            return il2cpp::create_object<app::StomperVisuals_SoundEvent__Enum>(get_class());
        }
    } // namespace StomperVisuals_SoundEvent__Enum
} // namespace app::classes::types
