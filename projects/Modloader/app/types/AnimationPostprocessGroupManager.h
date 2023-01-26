#pragma once
#include <Modloader/app/structs/AnimationPostprocessGroupManager.h>
#include <Modloader/app/structs/AnimationPostprocessGroupManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager {
        inline app::AnimationPostprocessGroupManager__Class** type_info() {
            static app::AnimationPostprocessGroupManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationPostprocessGroupManager__Class**)(modloader::win::memory::resolve_rva(0x047855F0));
            }
            return cache;
        }
        inline app::AnimationPostprocessGroupManager__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupManager__Class>(type_info(), "Moon", "AnimationPostprocessGroupManager");
        }
        inline app::AnimationPostprocessGroupManager* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager>(get_class());
        }
    } // namespace AnimationPostprocessGroupManager
} // namespace app::classes::types
