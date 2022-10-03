#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationParameter_Instance {
        namespace {
            app::AnimationParameter_Instance__Class* type_info_ref = nullptr;
        }
        app::AnimationParameter_Instance__Class** type_info = &type_info_ref;
        inline app::AnimationParameter_Instance__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationParameter_Instance__Class>(type_info, "Moon", "AnimationParameter", "Instance");
        }
        inline app::AnimationParameter_Instance* create() {
            return il2cpp::create_object<app::AnimationParameter_Instance>(get_class());
        }
        inline app::AnimationParameter_Instance__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationParameter_Instance__Array>(get_class(), size);
        }
    } // namespace AnimationParameter_Instance
} // namespace app::classes::types
