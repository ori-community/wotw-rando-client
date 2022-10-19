#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_BlendMode__Enum {
        namespace {
            inline app::P3D_BlendMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::P3D_BlendMode__Enum__Class** type_info = &type_info_ref;
        inline app::P3D_BlendMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::P3D_BlendMode__Enum__Class>(type_info, "", "P3D_BlendMode");
        }
        inline app::P3D_BlendMode__Enum* create() {
            return il2cpp::create_object<app::P3D_BlendMode__Enum>(get_class());
        }
    } // namespace P3D_BlendMode__Enum
} // namespace app::classes::types
