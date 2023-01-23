#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraSettings__Array__Class.h>
#include <Modloader/app/structs/CameraSettings__Array.h>

namespace app::classes::types {
    namespace CameraSettings__Array {
        namespace {
            inline app::CameraSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraSettings__Array__Class** type_info = &type_info_ref;
        inline app::CameraSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettings__Array__Class>(type_info, "", "CameraSettings[]");
        }
        inline app::CameraSettings__Array* create() {
            return il2cpp::create_object<app::CameraSettings__Array>(get_class());
        }
    } // namespace CameraSettings__Array
} // namespace app::classes::types
