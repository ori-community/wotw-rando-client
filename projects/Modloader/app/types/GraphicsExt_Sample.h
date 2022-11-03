#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GraphicsExt_Sample {
        namespace {
            inline app::GraphicsExt_Sample__Class* type_info_ref = nullptr;
        }
        inline app::GraphicsExt_Sample__Class** type_info = &type_info_ref;
        inline app::GraphicsExt_Sample__Class* get_class() {
            return il2cpp::get_nested_class<app::GraphicsExt_Sample__Class>(type_info, "Moon.Rendering", "GraphicsExt", "Sample");
        }
        inline app::GraphicsExt_Sample* create() {
            return il2cpp::create_object<app::GraphicsExt_Sample>(get_class());
        }
        inline app::GraphicsExt_Sample__Boxed* box(app::GraphicsExt_Sample value) {
            return il2cpp::box_value<app::GraphicsExt_Sample__Boxed>(get_class(), value);
        }
    } // namespace GraphicsExt_Sample
} // namespace app::classes::types
