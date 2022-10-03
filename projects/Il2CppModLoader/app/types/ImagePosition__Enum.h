#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImagePosition__Enum {
        namespace {
            app::ImagePosition__Enum__Class* type_info_ref = nullptr;
        }
        app::ImagePosition__Enum__Class** type_info = &type_info_ref;
        inline app::ImagePosition__Enum__Class* get_class() {
            return il2cpp::get_class<app::ImagePosition__Enum__Class>(type_info, "UnityEngine", "ImagePosition");
        }
        inline app::ImagePosition__Enum* create() {
            return il2cpp::create_object<app::ImagePosition__Enum>(get_class());
        }
    } // namespace ImagePosition__Enum
} // namespace app::classes::types
