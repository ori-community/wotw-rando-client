#pragma once
#include <Modloader/app/structs/DirectBlendAnimation_Input.h>
#include <Modloader/app/structs/DirectBlendAnimation_Input__Array.h>
#include <Modloader/app/structs/DirectBlendAnimation_Input__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectBlendAnimation_Input {
        inline app::DirectBlendAnimation_Input__Class** type_info() {
            static app::DirectBlendAnimation_Input__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectBlendAnimation_Input__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectBlendAnimation_Input__Class* get_class() {
            return il2cpp::get_nested_class<app::DirectBlendAnimation_Input__Class>(type_info(), "Moon", "DirectBlendAnimation", "Input");
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
