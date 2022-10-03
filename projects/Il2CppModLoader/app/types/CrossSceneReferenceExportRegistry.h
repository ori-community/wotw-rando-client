#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceExportRegistry {
        namespace {
            app::CrossSceneReferenceExportRegistry__Class* type_info_ref = nullptr;
        }
        app::CrossSceneReferenceExportRegistry__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceExportRegistry__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceExportRegistry__Class>(type_info, "Moon", "CrossSceneReferenceExportRegistry");
        }
        inline app::CrossSceneReferenceExportRegistry* create() {
            return il2cpp::create_object<app::CrossSceneReferenceExportRegistry>(get_class());
        }
    } // namespace CrossSceneReferenceExportRegistry
} // namespace app::classes::types
