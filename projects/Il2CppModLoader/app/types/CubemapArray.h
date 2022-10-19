#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CubemapArray {
        namespace {
            inline app::CubemapArray__Class* type_info_ref = nullptr;
        }
        inline app::CubemapArray__Class** type_info = &type_info_ref;
        inline app::CubemapArray__Class* get_class() {
            return il2cpp::get_class<app::CubemapArray__Class>(type_info, "UnityEngine", "CubemapArray");
        }
        inline app::CubemapArray* create() {
            return il2cpp::create_object<app::CubemapArray>(get_class());
        }
    } // namespace CubemapArray
} // namespace app::classes::types
