#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VectorAnimationParameter {
        namespace {
            app::VectorAnimationParameter__Class* type_info_ref = nullptr;
        }
        app::VectorAnimationParameter__Class** type_info = &type_info_ref;
        inline app::VectorAnimationParameter__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameter__Class>(type_info, "Moon", "VectorAnimationParameter");
        }
        inline app::VectorAnimationParameter* create() {
            return il2cpp::create_object<app::VectorAnimationParameter>(get_class());
        }
        inline app::VectorAnimationParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::VectorAnimationParameter__Array>(get_class(), size);
        }
        inline app::VectorAnimationParameter__Array* create_array(const std::vector<app::VectorAnimationParameter*>& items) {
            return il2cpp::array_new<app::VectorAnimationParameter__Array>(get_class(), items);
        }
    } // namespace VectorAnimationParameter
} // namespace app::classes::types
