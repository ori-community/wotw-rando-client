#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimatedCrossfadeInstance {
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Class** type_info() {
            static app::MoonAnimator_AnimatedCrossfadeInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_AnimatedCrossfadeInstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimatedCrossfadeInstance__Class>(type_info(), "Moon", "MoonAnimator", "AnimatedCrossfadeInstance");
        }
        inline app::MoonAnimator_AnimatedCrossfadeInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimatedCrossfadeInstance>(get_class());
        }
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_AnimatedCrossfadeInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Array* create_array(const std::vector<app::MoonAnimator_AnimatedCrossfadeInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_AnimatedCrossfadeInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_AnimatedCrossfadeInstance
} // namespace app::classes::types
