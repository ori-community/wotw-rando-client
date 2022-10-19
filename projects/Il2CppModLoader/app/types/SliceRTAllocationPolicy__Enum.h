#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SliceRTAllocationPolicy__Enum {
        namespace {
            inline app::SliceRTAllocationPolicy__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SliceRTAllocationPolicy__Enum__Class** type_info = &type_info_ref;
        inline app::SliceRTAllocationPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::SliceRTAllocationPolicy__Enum__Class>(type_info, "Moon.Rendering", "SliceRTAllocationPolicy");
        }
        inline app::SliceRTAllocationPolicy__Enum* create() {
            return il2cpp::create_object<app::SliceRTAllocationPolicy__Enum>(get_class());
        }
    } // namespace SliceRTAllocationPolicy__Enum
} // namespace app::classes::types
