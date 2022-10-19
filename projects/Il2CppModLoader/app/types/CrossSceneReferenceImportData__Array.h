#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportData__Array {
        namespace {
            inline app::CrossSceneReferenceImportData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CrossSceneReferenceImportData__Array__Class** type_info = &type_info_ref;
        inline app::CrossSceneReferenceImportData__Array__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportData__Array__Class>(type_info, "Moon", "CrossSceneReferenceImportData[]");
        }
        inline app::CrossSceneReferenceImportData__Array* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportData__Array>(get_class());
        }
    } // namespace CrossSceneReferenceImportData__Array
} // namespace app::classes::types
