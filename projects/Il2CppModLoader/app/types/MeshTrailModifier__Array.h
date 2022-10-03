#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshTrailModifier__Array {
        namespace {
            app::MeshTrailModifier__Array__Class* type_info_ref = nullptr;
        }
        app::MeshTrailModifier__Array__Class** type_info = &type_info_ref;
        inline app::MeshTrailModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailModifier__Array__Class>(type_info, "", "MeshTrailModifier[]");
        }
        inline app::MeshTrailModifier__Array* create() {
            return il2cpp::create_object<app::MeshTrailModifier__Array>(get_class());
        }
    } // namespace MeshTrailModifier__Array
} // namespace app::classes::types
