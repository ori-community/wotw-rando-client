#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClipAnimation_RootMotionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClipAnimation_RootMotionData__Class** type_info;
        inline app::ClipAnimation_RootMotionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ClipAnimation_RootMotionData__Class>(type_info, "Moon", "ClipAnimation", "RootMotionData");
        }
        inline app::ClipAnimation_RootMotionData* create() {
            return il2cpp::create_object<app::ClipAnimation_RootMotionData>(get_class());
        }
    } // namespace ClipAnimation_RootMotionData
} // namespace app::classes::types
