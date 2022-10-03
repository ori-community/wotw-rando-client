#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrushPreview {
        namespace {
            app::BrushPreview__Class* type_info_ref = nullptr;
        }
        app::BrushPreview__Class** type_info = &type_info_ref;
        inline app::BrushPreview__Class* get_class() {
            return il2cpp::get_class<app::BrushPreview__Class>(type_info, "", "BrushPreview");
        }
        inline app::BrushPreview* create() {
            return il2cpp::create_object<app::BrushPreview>(get_class());
        }
    } // namespace BrushPreview
} // namespace app::classes::types
