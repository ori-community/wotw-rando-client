#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPlayer {
        namespace {
            inline app::AnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPlayer__Class** type_info = &type_info_ref;
        inline app::AnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayer__Class>(type_info, "Moon", "AnimationPlayer");
        }
        inline app::AnimationPlayer* create() {
            return il2cpp::create_object<app::AnimationPlayer>(get_class());
        }
        inline app::AnimationPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPlayer__Array>(get_class(), size);
        }
        inline app::AnimationPlayer__Array* create_array(const std::vector<app::AnimationPlayer*>& items) {
            return il2cpp::array_new<app::AnimationPlayer__Array>(get_class(), items);
        }
    } // namespace AnimationPlayer
} // namespace app::classes::types
