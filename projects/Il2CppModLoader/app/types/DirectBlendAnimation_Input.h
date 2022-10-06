#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectBlendAnimation_Input {
        namespace {
            app::DirectBlendAnimation_Input__Class* type_info_ref = nullptr;
        }
        app::DirectBlendAnimation_Input__Class** type_info = &type_info_ref;
        inline app::DirectBlendAnimation_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::DirectBlendAnimation_Input__Class>(type_info, "Moon", "DirectBlendAnimation", "Input");
        }
        inline app::DirectBlendAnimation_Input* create() {
            return il2cpp::create_object<app::DirectBlendAnimation_Input>(get_class());
        }
        inline app::DirectBlendAnimation_Input__Array* create_array(int size) {
            return il2cpp::array_new<app::DirectBlendAnimation_Input__Array>(get_class(), size);
        }
        inline app::DirectBlendAnimation_Input__Array* create_array(const std::vector<app::DirectBlendAnimation_Input*>& items) {
            return il2cpp::array_new<app::DirectBlendAnimation_Input__Array>(get_class(), items);
        }
    } // namespace DirectBlendAnimation_Input
} // namespace app::classes::types
