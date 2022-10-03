#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CubemapFace__Enum {
        namespace {
            app::CubemapFace__Enum__Class* type_info_ref = nullptr;
        }
        app::CubemapFace__Enum__Class** type_info = &type_info_ref;
        inline app::CubemapFace__Enum__Class* get_class() {
            return il2cpp::get_class<app::CubemapFace__Enum__Class>(type_info, "UnityEngine", "CubemapFace");
        }
        inline app::CubemapFace__Enum* create() {
            return il2cpp::create_object<app::CubemapFace__Enum>(get_class());
        }
    } // namespace CubemapFace__Enum
} // namespace app::classes::types
