#pragma once
#include <Modloader/app/structs/BlendAnimationMode__Enum.h>
#include <Modloader/app/structs/BlendAnimationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendAnimationMode__Enum {
        inline app::BlendAnimationMode__Enum__Class** type_info() {
            static app::BlendAnimationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendAnimationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendAnimationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimationMode__Enum__Class>(type_info(), "Moon", "BlendAnimationMode");
        }
        inline app::BlendAnimationMode__Enum* create() {
            return il2cpp::create_object<app::BlendAnimationMode__Enum>(get_class());
        }
    } // namespace BlendAnimationMode__Enum
} // namespace app::classes::types
