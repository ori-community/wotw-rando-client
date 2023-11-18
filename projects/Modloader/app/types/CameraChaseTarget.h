#pragma once
#include <Modloader/app/structs/CameraChaseTarget.h>
#include <Modloader/app/structs/CameraChaseTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraChaseTarget {
        inline app::CameraChaseTarget__Class** type_info() {
            static app::CameraChaseTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraChaseTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraChaseTarget__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTarget__Class>(type_info(), "", "CameraChaseTarget");
        }
        inline app::CameraChaseTarget* create() {
            return il2cpp::create_object<app::CameraChaseTarget>(get_class());
        }
    } // namespace CameraChaseTarget
} // namespace app::classes::types
