#pragma once
#include <Modloader/app/structs/AnimationParameter.h>
#include <Modloader/app/structs/AnimationParameter__Array.h>
#include <Modloader/app/structs/AnimationParameter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationParameter {
        inline app::AnimationParameter__Class** type_info() {
            static app::AnimationParameter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationParameter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationParameter__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameter__Class>(type_info(), "Moon", "AnimationParameter");
        }
        inline app::AnimationParameter* create() {
            return il2cpp::create_object<app::AnimationParameter>(get_class());
        }
        inline app::AnimationParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationParameter__Array>(get_class(), size);
        }
        inline app::AnimationParameter__Array* create_array(const std::vector<app::AnimationParameter*>& items) {
            return il2cpp::array_new<app::AnimationParameter__Array>(get_class(), items);
        }
    } // namespace AnimationParameter
} // namespace app::classes::types
