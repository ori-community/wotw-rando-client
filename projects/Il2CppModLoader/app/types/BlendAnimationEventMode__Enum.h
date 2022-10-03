#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendAnimationEventMode__Enum {
        namespace {
            app::BlendAnimationEventMode__Enum__Class* type_info_ref = nullptr;
        }
        app::BlendAnimationEventMode__Enum__Class** type_info = &type_info_ref;
        inline app::BlendAnimationEventMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimationEventMode__Enum__Class>(type_info, "Moon", "BlendAnimationEventMode");
        }
        inline app::BlendAnimationEventMode__Enum* create() {
            return il2cpp::create_object<app::BlendAnimationEventMode__Enum>(get_class());
        }
    } // namespace BlendAnimationEventMode__Enum
} // namespace app::classes::types
