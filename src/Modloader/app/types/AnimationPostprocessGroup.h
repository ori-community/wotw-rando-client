#pragma once
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#include <Modloader/app/structs/AnimationPostprocessGroup__Array.h>
#include <Modloader/app/structs/AnimationPostprocessGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroup {
        inline app::AnimationPostprocessGroup__Class** type_info() {
            static app::AnimationPostprocessGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPostprocessGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPostprocessGroup__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroup__Class>(type_info(), "Moon", "AnimationPostprocessGroup");
        }
        inline app::AnimationPostprocessGroup* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroup>(get_class());
        }
        inline app::AnimationPostprocessGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocessGroup__Array>(get_class(), size);
        }
        inline app::AnimationPostprocessGroup__Array* create_array(const std::vector<app::AnimationPostprocessGroup*>& items) {
            return il2cpp::array_new<app::AnimationPostprocessGroup__Array>(get_class(), items);
        }
    } // namespace AnimationPostprocessGroup
} // namespace app::classes::types
