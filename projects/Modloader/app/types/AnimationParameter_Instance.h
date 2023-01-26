#pragma once
#include <Modloader/app/structs/AnimationParameter_Instance.h>
#include <Modloader/app/structs/AnimationParameter_Instance__Array.h>
#include <Modloader/app/structs/AnimationParameter_Instance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationParameter_Instance {
        inline app::AnimationParameter_Instance__Class** type_info() {
            static app::AnimationParameter_Instance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationParameter_Instance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationParameter_Instance__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationParameter_Instance__Class>(type_info(), "Moon", "AnimationParameter", "Instance");
        }
        inline app::AnimationParameter_Instance* create() {
            return il2cpp::create_object<app::AnimationParameter_Instance>(get_class());
        }
        inline app::AnimationParameter_Instance__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationParameter_Instance__Array>(get_class(), size);
        }
        inline app::AnimationParameter_Instance__Array* create_array(const std::vector<app::AnimationParameter_Instance*>& items) {
            return il2cpp::array_new<app::AnimationParameter_Instance__Array>(get_class(), items);
        }
    } // namespace AnimationParameter_Instance
} // namespace app::classes::types
