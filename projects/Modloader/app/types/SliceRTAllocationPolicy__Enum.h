#pragma once
#include <Modloader/app/structs/SliceRTAllocationPolicy__Enum.h>
#include <Modloader/app/structs/SliceRTAllocationPolicy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SliceRTAllocationPolicy__Enum {
        inline app::SliceRTAllocationPolicy__Enum__Class** type_info() {
            static app::SliceRTAllocationPolicy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SliceRTAllocationPolicy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SliceRTAllocationPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::SliceRTAllocationPolicy__Enum__Class>(type_info(), "Moon.Rendering", "SliceRTAllocationPolicy");
        }
        inline app::SliceRTAllocationPolicy__Enum* create() {
            return il2cpp::create_object<app::SliceRTAllocationPolicy__Enum>(get_class());
        }
    } // namespace SliceRTAllocationPolicy__Enum
} // namespace app::classes::types
