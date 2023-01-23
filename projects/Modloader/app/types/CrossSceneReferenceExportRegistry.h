#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry__Class.h>
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry.h>

namespace app::classes::types {
    namespace CrossSceneReferenceExportRegistry {
        namespace {
            inline app::CrossSceneReferenceExportRegistry__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneReferenceExportRegistry__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceExportRegistry__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceExportRegistry__Class>(type_info, "Moon", "CrossSceneReferenceExportRegistry");
        }
        inline app::CrossSceneReferenceExportRegistry* create() {
            return il2cpp::create_object<app::CrossSceneReferenceExportRegistry>(get_class());
        }
    } // namespace CrossSceneReferenceExportRegistry
} // namespace app::classes::types
