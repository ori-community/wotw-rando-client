#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Enemy3D {
        namespace {
            inline app::Enemy3D__Class* type_info_ref = nullptr;
        }
        inline app::Enemy3D__Class** type_info = &type_info_ref;
        inline app::Enemy3D__Class* get_class() {
            return il2cpp::get_class<app::Enemy3D__Class>(type_info, "", "Enemy3D");
        }
        inline app::Enemy3D* create() {
            return il2cpp::create_object<app::Enemy3D>(get_class());
        }
    } // namespace Enemy3D
} // namespace app::classes::types
