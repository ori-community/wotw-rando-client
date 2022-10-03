#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Edge__Array {
        namespace {
            app::Edge__Array__Class* type_info_ref = nullptr;
        }
        app::Edge__Array__Class** type_info = &type_info_ref;
        inline app::Edge__Array__Class* get_class() {
            return il2cpp::get_class<app::Edge__Array__Class>(type_info, "TriangleNet.Geometry", "Edge[]");
        }
        inline app::Edge__Array* create() {
            return il2cpp::create_object<app::Edge__Array>(get_class());
        }
    } // namespace Edge__Array
} // namespace app::classes::types
