#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorControllerPlayable {
        inline app::AnimatorControllerPlayable__Class** type_info = (app::AnimatorControllerPlayable__Class**)(modloader::win::memory::resolve_rva(0x04709170));
        inline app::AnimatorControllerPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerPlayable__Class>(type_info, "UnityEngine.Animations", "AnimatorControllerPlayable");
        }
        inline app::AnimatorControllerPlayable* create() {
            return il2cpp::create_object<app::AnimatorControllerPlayable>(get_class());
        }
        inline app::AnimatorControllerPlayable__Boxed* box(app::AnimatorControllerPlayable value) {
            return il2cpp::box_value<app::AnimatorControllerPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimatorControllerPlayable
} // namespace app::classes::types
