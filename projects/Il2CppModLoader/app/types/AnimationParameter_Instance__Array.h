#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationParameter_Instance__Array {
        namespace {
            app::AnimationParameter_Instance__Array__Class* type_info_ref = nullptr;
        }
        app::AnimationParameter_Instance__Array__Class** type_info = &type_info_ref;
        inline app::AnimationParameter_Instance__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameter_Instance__Array__Class>(type_info, "Moon", "AnimationParameter+Instance[]");
        }
        inline app::AnimationParameter_Instance__Array* create() {
            return il2cpp::create_object<app::AnimationParameter_Instance__Array>(get_class());
        }
    } // namespace AnimationParameter_Instance__Array
} // namespace app::classes::types
