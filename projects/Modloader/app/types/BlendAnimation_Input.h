#pragma once
#include <Modloader/app/structs/BlendAnimation_Input.h>
#include <Modloader/app/structs/BlendAnimation_Input__Array.h>
#include <Modloader/app/structs/BlendAnimation_Input__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation_Input {
        inline app::BlendAnimation_Input__Class** type_info() {
            static app::BlendAnimation_Input__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendAnimation_Input__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendAnimation_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::BlendAnimation_Input__Class>(type_info(), "Moon", "BlendAnimation", "Input");
        }
        inline app::BlendAnimation_Input* create() {
            return il2cpp::create_object<app::BlendAnimation_Input>(get_class());
        }
        inline app::BlendAnimation_Input__Array* create_array(int size) {
            return il2cpp::array_new<app::BlendAnimation_Input__Array>(get_class(), size);
        }
        inline app::BlendAnimation_Input__Array* create_array(const std::vector<app::BlendAnimation_Input*>& items) {
            return il2cpp::array_new<app::BlendAnimation_Input__Array>(get_class(), items);
        }
    } // namespace BlendAnimation_Input
} // namespace app::classes::types
