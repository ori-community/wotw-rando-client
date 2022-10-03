#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocess {
        namespace {
            app::AnimationPostprocess__Class* type_info_ref = nullptr;
        }
        app::AnimationPostprocess__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocess__Class>(type_info, "Moon", "AnimationPostprocess");
        }
        inline app::AnimationPostprocess* create() {
            return il2cpp::create_object<app::AnimationPostprocess>(get_class());
        }
        inline app::AnimationPostprocess__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocess__Array>(get_class(), size);
        }
    } // namespace AnimationPostprocess
} // namespace app::classes::types
