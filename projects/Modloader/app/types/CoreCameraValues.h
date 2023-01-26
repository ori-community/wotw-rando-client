#pragma once
#include <Modloader/app/structs/CoreCameraValues.h>
#include <Modloader/app/structs/CoreCameraValues__Boxed.h>
#include <Modloader/app/structs/CoreCameraValues__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CoreCameraValues {
        inline app::CoreCameraValues__Class** type_info() {
            static app::CoreCameraValues__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CoreCameraValues__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CoreCameraValues__Class* get_class() {
            return il2cpp::get_class<app::CoreCameraValues__Class>(type_info(), "UnityEngine.Experimental.Rendering", "CoreCameraValues");
        }
        inline app::CoreCameraValues* create() {
            return il2cpp::create_object<app::CoreCameraValues>(get_class());
        }
        inline app::CoreCameraValues__Boxed* box(app::CoreCameraValues value) {
            return il2cpp::box_value<app::CoreCameraValues__Boxed>(get_class(), value);
        }
    } // namespace CoreCameraValues
} // namespace app::classes::types
