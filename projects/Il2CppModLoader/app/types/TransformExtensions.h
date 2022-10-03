#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformExtensions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransformExtensions__Class** type_info;
        inline app::TransformExtensions__Class* get_class() {
            return il2cpp::get_class<app::TransformExtensions__Class>(type_info, "Moon", "TransformExtensions");
        }
        inline app::TransformExtensions* create() {
            return il2cpp::create_object<app::TransformExtensions>(get_class());
        }
    } // namespace TransformExtensions
} // namespace app::classes::types
