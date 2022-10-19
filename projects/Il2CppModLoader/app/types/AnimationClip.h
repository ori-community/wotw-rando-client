#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationClip {
        namespace {
            inline app::AnimationClip__Class* type_info_ref = nullptr;
        }
        inline app::AnimationClip__Class** type_info = &type_info_ref;
        inline app::AnimationClip__Class* get_class() {
            return il2cpp::get_class<app::AnimationClip__Class>(type_info, "UnityEngine", "AnimationClip");
        }
        inline app::AnimationClip* create() {
            return il2cpp::create_object<app::AnimationClip>(get_class());
        }
        inline app::AnimationClip__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationClip__Array>(get_class(), size);
        }
        inline app::AnimationClip__Array* create_array(const std::vector<app::AnimationClip*>& items) {
            return il2cpp::array_new<app::AnimationClip__Array>(get_class(), items);
        }
    } // namespace AnimationClip
} // namespace app::classes::types
