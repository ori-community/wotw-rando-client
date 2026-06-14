#pragma once
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimationInstance {
        inline app::MoonAnimator_AnimationInstance__Class** type_info() {
            static app::MoonAnimator_AnimationInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimator_AnimationInstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimator_AnimationInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimationInstance__Class>(type_info(), "Moon", "MoonAnimator", "AnimationInstance");
        }
        inline app::MoonAnimator_AnimationInstance* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimationInstance>(get_class());
        }
        inline app::MoonAnimator_AnimationInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_AnimationInstance__Array>(get_class(), size);
        }
        inline app::MoonAnimator_AnimationInstance__Array* create_array(const std::vector<app::MoonAnimator_AnimationInstance*>& items) {
            return il2cpp::array_new<app::MoonAnimator_AnimationInstance__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_AnimationInstance
} // namespace app::classes::types
