#pragma once
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState__Array.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager_GroupState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager_GroupState {
        inline app::AnimationPostprocessGroupManager_GroupState__Class** type_info() {
            static app::AnimationPostprocessGroupManager_GroupState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationPostprocessGroupManager_GroupState__Class**)(modloader::win::memory::resolve_rva(0x0471CD40));
            }
            return cache;
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationPostprocessGroupManager_GroupState__Class>(type_info(), "Moon", "AnimationPostprocessGroupManager", "GroupState");
        }
        inline app::AnimationPostprocessGroupManager_GroupState* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager_GroupState>(get_class());
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocessGroupManager_GroupState__Array>(get_class(), size);
        }
        inline app::AnimationPostprocessGroupManager_GroupState__Array* create_array(const std::vector<app::AnimationPostprocessGroupManager_GroupState*>& items) {
            return il2cpp::array_new<app::AnimationPostprocessGroupManager_GroupState__Array>(get_class(), items);
        }
    } // namespace AnimationPostprocessGroupManager_GroupState
} // namespace app::classes::types
