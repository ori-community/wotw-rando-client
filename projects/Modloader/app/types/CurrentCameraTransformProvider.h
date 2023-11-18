#pragma once
#include <Modloader/app/structs/CurrentCameraTransformProvider.h>
#include <Modloader/app/structs/CurrentCameraTransformProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurrentCameraTransformProvider {
        inline app::CurrentCameraTransformProvider__Class** type_info() {
            static app::CurrentCameraTransformProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CurrentCameraTransformProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CurrentCameraTransformProvider__Class* get_class() {
            return il2cpp::get_class<app::CurrentCameraTransformProvider__Class>(type_info(), "", "CurrentCameraTransformProvider");
        }
        inline app::CurrentCameraTransformProvider* create() {
            return il2cpp::create_object<app::CurrentCameraTransformProvider>(get_class());
        }
    } // namespace CurrentCameraTransformProvider
} // namespace app::classes::types
