#pragma once
#include <Modloader/app/structs/P3D_BrushPreview.h>
#include <Modloader/app/structs/P3D_BrushPreview__Array.h>
#include <Modloader/app/structs/P3D_BrushPreview__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_BrushPreview {
        inline app::P3D_BrushPreview__Class** type_info() {
            static app::P3D_BrushPreview__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_BrushPreview__Class**)(modloader::win::memory::resolve_rva(0x04737F38));
            }
            return cache;
        }
        inline app::P3D_BrushPreview__Class* get_class() {
            return il2cpp::get_class<app::P3D_BrushPreview__Class>(type_info(), "", "P3D_BrushPreview");
        }
        inline app::P3D_BrushPreview* create() {
            return il2cpp::create_object<app::P3D_BrushPreview>(get_class());
        }
        inline app::P3D_BrushPreview__Array* create_array(int size) {
            return il2cpp::array_new<app::P3D_BrushPreview__Array>(get_class(), size);
        }
        inline app::P3D_BrushPreview__Array* create_array(const std::vector<app::P3D_BrushPreview*>& items) {
            return il2cpp::array_new<app::P3D_BrushPreview__Array>(get_class(), items);
        }
    } // namespace P3D_BrushPreview
} // namespace app::classes::types
