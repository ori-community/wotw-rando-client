#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimatedCrossfadeInstance {
        namespace {
            inline app::MoonAnimator_AnimatedCrossfadeInstance__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_AnimatedCrossfadeInstance__Class>(type_info, "Moon", "MoonAnimator", "AnimatedCrossfadeInstance");
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
