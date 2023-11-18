#pragma once
#include <Modloader/app/structs/ColorTween_ColorTweenMode__Enum.h>
#include <Modloader/app/structs/ColorTween_ColorTweenMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorTween_ColorTweenMode__Enum {
        inline app::ColorTween_ColorTweenMode__Enum__Class** type_info() {
            static app::ColorTween_ColorTweenMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorTween_ColorTweenMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorTween_ColorTweenMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorTween_ColorTweenMode__Enum__Class>(type_info(), "UnityEngine.UI.CoroutineTween", "ColorTween", "ColorTweenMode");
        }
        inline app::ColorTween_ColorTweenMode__Enum* create() {
            return il2cpp::create_object<app::ColorTween_ColorTweenMode__Enum>(get_class());
        }
    } // namespace ColorTween_ColorTweenMode__Enum
} // namespace app::classes::types
