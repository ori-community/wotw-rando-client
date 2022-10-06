#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatAnimationParameter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatAnimationParameter__Class** type_info;
        inline app::FloatAnimationParameter__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimationParameter__Class>(type_info, "Moon", "FloatAnimationParameter");
        }
        inline app::FloatAnimationParameter* create() {
            return il2cpp::create_object<app::FloatAnimationParameter>(get_class());
        }
        inline app::FloatAnimationParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatAnimationParameter__Array>(get_class(), size);
        }
        inline app::FloatAnimationParameter__Array* create_array(const std::vector<app::FloatAnimationParameter*>& items) {
            return il2cpp::array_new<app::FloatAnimationParameter__Array>(get_class(), items);
        }
    } // namespace FloatAnimationParameter
} // namespace app::classes::types
