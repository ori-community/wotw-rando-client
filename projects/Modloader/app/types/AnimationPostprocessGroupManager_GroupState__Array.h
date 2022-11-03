#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager_GroupState__Array {
        namespace {
            inline app::AnimationPostprocessGroupManager_GroupState__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocessGroupManager_GroupState__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupManager_GroupState__Array__Class>(type_info, "Moon", "AnimationPostprocessGroupManager+GroupState[]");
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager_GroupState__Array>(get_class());
        }
    } // namespace AnimationPostprocessGroupManager_GroupState__Array
} // namespace app::classes::types
