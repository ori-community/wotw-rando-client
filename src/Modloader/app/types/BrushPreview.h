#pragma once
#include <Modloader/app/structs/BrushPreview.h>
#include <Modloader/app/structs/BrushPreview__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrushPreview {
        inline app::BrushPreview__Class** type_info() {
            static app::BrushPreview__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrushPreview__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrushPreview__Class* get_class() {
            return il2cpp::get_class<app::BrushPreview__Class>(type_info(), "", "BrushPreview");
        }
        inline app::BrushPreview* create() {
            return il2cpp::create_object<app::BrushPreview>(get_class());
        }
    } // namespace BrushPreview
} // namespace app::classes::types
