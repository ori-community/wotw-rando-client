#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfField_QualitySettings__Array {
        inline app::DepthOfField_QualitySettings__Array__Class** type_info = (app::DepthOfField_QualitySettings__Array__Class**)(modloader::win::memory::resolve_rva(0x047049F8));
        inline app::DepthOfField_QualitySettings__Array__Class* get_class() {
            return il2cpp::get_class<app::DepthOfField_QualitySettings__Array__Class>(type_info, "UnityStandardAssets.CinematicEffects", "DepthOfField+QualitySettings[]");
        }
        inline app::DepthOfField_QualitySettings__Array* create() {
            return il2cpp::create_object<app::DepthOfField_QualitySettings__Array>(get_class());
        }
    } // namespace DepthOfField_QualitySettings__Array
} // namespace app::classes::types
