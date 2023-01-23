#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinUI_UIZone__Enum__Class.h>
#include <Modloader/app/structs/SeinUI_UIZone__Enum.h>

namespace app::classes::types {
    namespace SeinUI_UIZone__Enum {
        namespace {
            inline app::SeinUI_UIZone__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinUI_UIZone__Enum__Class** type_info = &type_info_ref;
        inline app::SeinUI_UIZone__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinUI_UIZone__Enum__Class>(type_info, "", "SeinUI", "UIZone");
        }
        inline app::SeinUI_UIZone__Enum* create() {
            return il2cpp::create_object<app::SeinUI_UIZone__Enum>(get_class());
        }
    } // namespace SeinUI_UIZone__Enum
} // namespace app::classes::types
