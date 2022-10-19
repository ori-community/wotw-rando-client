#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Initialization_AsyncUploadTimeSlicedUpdate {
        namespace {
            inline app::Initialization_AsyncUploadTimeSlicedUpdate__Class* type_info_ref = nullptr;
        }
        inline app::Initialization_AsyncUploadTimeSlicedUpdate__Class** type_info = &type_info_ref;
        inline app::Initialization_AsyncUploadTimeSlicedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::Initialization_AsyncUploadTimeSlicedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Initialization", "AsyncUploadTimeSlicedUpdate");
        }
        inline app::Initialization_AsyncUploadTimeSlicedUpdate* create() {
            return il2cpp::create_object<app::Initialization_AsyncUploadTimeSlicedUpdate>(get_class());
        }
        inline app::Initialization_AsyncUploadTimeSlicedUpdate__Boxed* box(app::Initialization_AsyncUploadTimeSlicedUpdate value) {
            return il2cpp::box_value<app::Initialization_AsyncUploadTimeSlicedUpdate__Boxed>(get_class(), value);
        }
    } // namespace Initialization_AsyncUploadTimeSlicedUpdate
} // namespace app::classes::types
