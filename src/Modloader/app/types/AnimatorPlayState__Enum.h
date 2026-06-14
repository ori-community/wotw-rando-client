#pragma once
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/AnimatorPlayState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorPlayState__Enum {
        inline app::AnimatorPlayState__Enum__Class** type_info() {
            static app::AnimatorPlayState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorPlayState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorPlayState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimatorPlayState__Enum__Class>(type_info(), "Moon.Timeline", "AnimatorPlayState");
        }
        inline app::AnimatorPlayState__Enum* create() {
            return il2cpp::create_object<app::AnimatorPlayState__Enum>(get_class());
        }
    } // namespace AnimatorPlayState__Enum
} // namespace app::classes::types
