#pragma once
#include <Modloader/app/structs/CameraPlayable.h>
#include <Modloader/app/structs/CameraPlayable__Boxed.h>
#include <Modloader/app/structs/CameraPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPlayable {
        inline app::CameraPlayable__Class** type_info() {
            static app::CameraPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraPlayable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraPlayable__Class* get_class() {
            return il2cpp::get_class<app::CameraPlayable__Class>(type_info(), "UnityEngine.Experimental.Playables", "CameraPlayable");
        }
        inline app::CameraPlayable* create() {
            return il2cpp::create_object<app::CameraPlayable>(get_class());
        }
        inline app::CameraPlayable__Boxed* box(app::CameraPlayable value) {
            return il2cpp::box_value<app::CameraPlayable__Boxed>(get_class(), value);
        }
    } // namespace CameraPlayable
} // namespace app::classes::types
