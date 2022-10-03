#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager_GroupState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationPostprocessGroupManager_GroupState__Class** type_info;
        inline app::AnimationPostprocessGroupManager_GroupState__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationPostprocessGroupManager_GroupState__Class>(type_info, "Moon", "AnimationPostprocessGroupManager", "GroupState");
        }
        inline app::AnimationPostprocessGroupManager_GroupState* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager_GroupState>(get_class());
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocessGroupManager_GroupState__Array>(get_class(), size);
        }
    } // namespace AnimationPostprocessGroupManager_GroupState
} // namespace app::classes::types
