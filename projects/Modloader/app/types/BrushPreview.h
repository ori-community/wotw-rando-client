#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrushPreview {
        namespace {
            inline app::BrushPreview__Class* type_info_ref = nullptr;
        }
        inline app::BrushPreview__Class** type_info = &type_info_ref;
        inline app::BrushPreview__Class* get_class() {
            return il2cpp::get_class<app::BrushPreview__Class>(type_info, "", "BrushPreview");
        }
        inline app::BrushPreview* create() {
            return il2cpp::create_object<app::BrushPreview>(get_class());
        }
    } // namespace BrushPreview
} // namespace app::classes::types
