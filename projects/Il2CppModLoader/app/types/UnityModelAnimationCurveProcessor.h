#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityModelAnimationCurveProcessor {
        namespace {
            inline app::UnityModelAnimationCurveProcessor__Class* type_info_ref = nullptr;
        }
        inline app::UnityModelAnimationCurveProcessor__Class** type_info = &type_info_ref;
        inline app::UnityModelAnimationCurveProcessor__Class* get_class() {
            return il2cpp::get_class<app::UnityModelAnimationCurveProcessor__Class>(type_info, "", "UnityModelAnimationCurveProcessor");
        }
        inline app::UnityModelAnimationCurveProcessor* create() {
            return il2cpp::create_object<app::UnityModelAnimationCurveProcessor>(get_class());
        }
    } // namespace UnityModelAnimationCurveProcessor
} // namespace app::classes::types
