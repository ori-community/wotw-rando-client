#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredAnimation_Input {
        namespace {
            app::LayeredAnimation_Input__Class* type_info_ref = nullptr;
        }
        app::LayeredAnimation_Input__Class** type_info = &type_info_ref;
        inline app::LayeredAnimation_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::LayeredAnimation_Input__Class>(type_info, "Moon", "LayeredAnimation", "Input");
        }
        inline app::LayeredAnimation_Input* create() {
            return il2cpp::create_object<app::LayeredAnimation_Input>(get_class());
        }
        inline app::LayeredAnimation_Input__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredAnimation_Input__Array>(get_class(), size);
        }
        inline app::LayeredAnimation_Input__Array* create_array(const std::vector<app::LayeredAnimation_Input*>& items) {
            return il2cpp::array_new<app::LayeredAnimation_Input__Array>(get_class(), items);
        }
    } // namespace LayeredAnimation_Input
} // namespace app::classes::types
