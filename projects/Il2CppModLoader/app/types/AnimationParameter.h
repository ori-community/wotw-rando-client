#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationParameter {
        namespace {
            app::AnimationParameter__Class* type_info_ref = nullptr;
        }
        app::AnimationParameter__Class** type_info = &type_info_ref;
        inline app::AnimationParameter__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameter__Class>(type_info, "Moon", "AnimationParameter");
        }
        inline app::AnimationParameter* create() {
            return il2cpp::create_object<app::AnimationParameter>(get_class());
        }
        inline app::AnimationParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationParameter__Array>(get_class(), size);
        }
    } // namespace AnimationParameter
} // namespace app::classes::types
