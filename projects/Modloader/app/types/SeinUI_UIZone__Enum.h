#pragma once
#include <Modloader/app/structs/SeinUI_UIZone__Enum.h>
#include <Modloader/app/structs/SeinUI_UIZone__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinUI_UIZone__Enum {
        inline app::SeinUI_UIZone__Enum__Class** type_info() {
            static app::SeinUI_UIZone__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinUI_UIZone__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinUI_UIZone__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinUI_UIZone__Enum__Class>(type_info(), "", "SeinUI", "UIZone");
        }
        inline app::SeinUI_UIZone__Enum* create() {
            return il2cpp::create_object<app::SeinUI_UIZone__Enum>(get_class());
        }
    } // namespace SeinUI_UIZone__Enum
} // namespace app::classes::types
