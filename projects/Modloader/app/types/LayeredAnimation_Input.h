#pragma once
#include <Modloader/app/structs/LayeredAnimation_Input.h>
#include <Modloader/app/structs/LayeredAnimation_Input__Array.h>
#include <Modloader/app/structs/LayeredAnimation_Input__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayeredAnimation_Input {
        inline app::LayeredAnimation_Input__Class** type_info() {
            static app::LayeredAnimation_Input__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LayeredAnimation_Input__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LayeredAnimation_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::LayeredAnimation_Input__Class>(type_info(), "Moon", "LayeredAnimation", "Input");
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
