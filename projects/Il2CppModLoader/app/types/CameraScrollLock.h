#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraScrollLock {
        namespace {
            app::CameraScrollLock__Class* type_info_ref = nullptr;
        }
        app::CameraScrollLock__Class** type_info = &type_info_ref;
        inline app::CameraScrollLock__Class* get_class() {
            return il2cpp::get_class<app::CameraScrollLock__Class>(type_info, "", "CameraScrollLock");
        }
        inline app::CameraScrollLock* create() {
            return il2cpp::create_object<app::CameraScrollLock>(get_class());
        }
        inline app::CameraScrollLock__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraScrollLock__Array>(get_class(), size);
        }
    } // namespace CameraScrollLock
} // namespace app::classes::types
