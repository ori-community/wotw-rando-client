#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraPlayable {
        namespace {
            inline app::CameraPlayable__Class* type_info_ref = nullptr;
        }
        inline app::CameraPlayable__Class** type_info = &type_info_ref;
        inline app::CameraPlayable__Class* get_class() {
            return il2cpp::get_class<app::CameraPlayable__Class>(type_info, "UnityEngine.Experimental.Playables", "CameraPlayable");
        }
        inline app::CameraPlayable* create() {
            return il2cpp::create_object<app::CameraPlayable>(get_class());
        }
        inline app::CameraPlayable__Boxed* box(app::CameraPlayable value) {
            return il2cpp::box_value<app::CameraPlayable__Boxed>(get_class(), value);
        }
    } // namespace CameraPlayable
} // namespace app::classes::types
