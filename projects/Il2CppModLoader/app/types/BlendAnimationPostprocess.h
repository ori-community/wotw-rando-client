#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendAnimationPostprocess {
        namespace {
            app::BlendAnimationPostprocess__Class* type_info_ref = nullptr;
        }
        app::BlendAnimationPostprocess__Class** type_info = &type_info_ref;
        inline app::BlendAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimationPostprocess__Class>(type_info, "Moon", "BlendAnimationPostprocess");
        }
        inline app::BlendAnimationPostprocess* create() {
            return il2cpp::create_object<app::BlendAnimationPostprocess>(get_class());
        }
    } // namespace BlendAnimationPostprocess
} // namespace app::classes::types
