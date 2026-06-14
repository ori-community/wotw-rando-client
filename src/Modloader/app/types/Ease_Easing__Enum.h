#pragma once
#include <Modloader/app/structs/Ease_Easing__Enum.h>
#include <Modloader/app/structs/Ease_Easing__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ease_Easing__Enum {
        inline app::Ease_Easing__Enum__Class** type_info() {
            static app::Ease_Easing__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ease_Easing__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ease_Easing__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Ease_Easing__Enum__Class>(type_info(), "", "Ease", "Easing");
        }
        inline app::Ease_Easing__Enum* create() {
            return il2cpp::create_object<app::Ease_Easing__Enum>(get_class());
        }
    } // namespace Ease_Easing__Enum
} // namespace app::classes::types
