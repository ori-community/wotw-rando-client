#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintOptions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstraintOptions__Class** type_info;
        inline app::ConstraintOptions__Class* get_class() {
            return il2cpp::get_class<app::ConstraintOptions__Class>(type_info, "TriangleNet.Meshing", "ConstraintOptions");
        }
        inline app::ConstraintOptions* create() {
            return il2cpp::create_object<app::ConstraintOptions>(get_class());
        }
    } // namespace ConstraintOptions
} // namespace app::classes::types
