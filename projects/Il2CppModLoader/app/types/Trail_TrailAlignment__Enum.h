#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Trail_TrailAlignment__Enum {
        namespace {
            inline app::Trail_TrailAlignment__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Trail_TrailAlignment__Enum__Class** type_info = &type_info_ref;
        inline app::Trail_TrailAlignment__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_TrailAlignment__Enum__Class>(type_info, "Moon", "Trail", "TrailAlignment");
        }
        inline app::Trail_TrailAlignment__Enum* create() {
            return il2cpp::create_object<app::Trail_TrailAlignment__Enum>(get_class());
        }
    } // namespace Trail_TrailAlignment__Enum
} // namespace app::classes::types
