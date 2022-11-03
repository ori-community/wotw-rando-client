#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CurrentCameraTransformProvider {
        namespace {
            inline app::CurrentCameraTransformProvider__Class* type_info_ref = nullptr;
        }
        inline app::CurrentCameraTransformProvider__Class** type_info = &type_info_ref;
        inline app::CurrentCameraTransformProvider__Class* get_class() {
            return il2cpp::get_class<app::CurrentCameraTransformProvider__Class>(type_info, "", "CurrentCameraTransformProvider");
        }
        inline app::CurrentCameraTransformProvider* create() {
            return il2cpp::create_object<app::CurrentCameraTransformProvider>(get_class());
        }
    } // namespace CurrentCameraTransformProvider
} // namespace app::classes::types
