#pragma once
#include <Modloader/app/structs/P3D_BrushPreview__Array.h>
#include <Modloader/app/structs/P3D_BrushPreview__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_BrushPreview__Array {
        inline app::P3D_BrushPreview__Array__Class** type_info() {
            static app::P3D_BrushPreview__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::P3D_BrushPreview__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::P3D_BrushPreview__Array__Class* get_class() {
            return il2cpp::get_class<app::P3D_BrushPreview__Array__Class>(type_info(), "", "P3D_BrushPreview[]");
        }
        inline app::P3D_BrushPreview__Array* create() {
            return il2cpp::create_object<app::P3D_BrushPreview__Array>(get_class());
        }
    } // namespace P3D_BrushPreview__Array
} // namespace app::classes::types
