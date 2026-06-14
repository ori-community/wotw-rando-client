#pragma once
#include <Modloader/app/structs/ScrollRect_ScrollbarVisibility__Enum.h>
#include <Modloader/app/structs/ScrollRect_ScrollbarVisibility__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScrollRect_ScrollbarVisibility__Enum {
        inline app::ScrollRect_ScrollbarVisibility__Enum__Class** type_info() {
            static app::ScrollRect_ScrollbarVisibility__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScrollRect_ScrollbarVisibility__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScrollRect_ScrollbarVisibility__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScrollRect_ScrollbarVisibility__Enum__Class>(type_info(), "UnityEngine.UI", "ScrollRect", "ScrollbarVisibility");
        }
        inline app::ScrollRect_ScrollbarVisibility__Enum* create() {
            return il2cpp::create_object<app::ScrollRect_ScrollbarVisibility__Enum>(get_class());
        }
    } // namespace ScrollRect_ScrollbarVisibility__Enum
} // namespace app::classes::types
