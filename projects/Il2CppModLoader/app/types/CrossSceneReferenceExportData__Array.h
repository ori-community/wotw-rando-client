#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossSceneReferenceExportData__Array {
        namespace {
            app::CrossSceneReferenceExportData__Array__Class* type_info_ref = nullptr;
        }
        app::CrossSceneReferenceExportData__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceExportData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceExportData__Array__Class>(type_info, "Moon", "CrossSceneReferenceExportData[]");
        }
        inline app::CrossSceneReferenceExportData__Array* create() {
            return il2cpp::create_object<app::CrossSceneReferenceExportData__Array>(get_class());
        }
    } // namespace CrossSceneReferenceExportData__Array
} // namespace app::classes::types
