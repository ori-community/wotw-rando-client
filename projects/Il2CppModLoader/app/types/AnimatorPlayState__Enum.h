#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorPlayState__Enum {
        namespace {
            app::AnimatorPlayState__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimatorPlayState__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorPlayState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorPlayState__Enum__Class>(type_info, "Moon.Timeline", "AnimatorPlayState");
        }
        inline app::AnimatorPlayState__Enum* create() {
            return il2cpp::create_object<app::AnimatorPlayState__Enum>(get_class());
        }
    } // namespace AnimatorPlayState__Enum
} // namespace app::classes::types
