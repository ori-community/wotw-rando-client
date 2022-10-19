#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroup {
        namespace {
            inline app::AnimationPostprocessGroup__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPostprocessGroup__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocessGroup__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroup__Class>(type_info, "Moon", "AnimationPostprocessGroup");
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
