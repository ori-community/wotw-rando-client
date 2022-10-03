#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupModifier {
        namespace {
            app::AnimationPostprocessGroupModifier__Class* type_info_ref = nullptr;
        }
        app::AnimationPostprocessGroupModifier__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocessGroupModifier__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupModifier__Class>(type_info, "Moon", "AnimationPostprocessGroupModifier");
        }
        inline app::AnimationPostprocessGroupModifier* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupModifier>(get_class());
        }
        inline app::AnimationPostprocessGroupModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocessGroupModifier__Array>(get_class(), size);
        }
    } // namespace AnimationPostprocessGroupModifier
} // namespace app::classes::types
