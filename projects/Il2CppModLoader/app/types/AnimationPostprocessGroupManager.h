#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager {
        inline app::AnimationPostprocessGroupManager__Class** type_info = (app::AnimationPostprocessGroupManager__Class**)(modloader::win::memory::resolve_rva(0x047855F0));
        inline app::AnimationPostprocessGroupManager__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupManager__Class>(type_info, "Moon", "AnimationPostprocessGroupManager");
        }
        inline app::AnimationPostprocessGroupManager* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager>(get_class());
        }
    } // namespace AnimationPostprocessGroupManager
} // namespace app::classes::types
