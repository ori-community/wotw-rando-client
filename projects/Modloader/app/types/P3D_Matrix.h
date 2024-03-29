#pragma once
#include <Modloader/app/structs/P3D_Matrix.h>
#include <Modloader/app/structs/P3D_Matrix__Boxed.h>
#include <Modloader/app/structs/P3D_Matrix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Matrix {
        inline app::P3D_Matrix__Class** type_info() {
            static app::P3D_Matrix__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::P3D_Matrix__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::P3D_Matrix__Class* get_class() {
            return il2cpp::get_class<app::P3D_Matrix__Class>(type_info(), "", "P3D_Matrix");
        }
        inline app::P3D_Matrix* create() {
            return il2cpp::create_object<app::P3D_Matrix>(get_class());
        }
        inline app::P3D_Matrix__Boxed* box(app::P3D_Matrix value) {
            return il2cpp::box_value<app::P3D_Matrix__Boxed>(get_class(), value);
        }
    } // namespace P3D_Matrix
} // namespace app::classes::types
