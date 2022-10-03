#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraChaseTarget {
        namespace {
            app::CameraChaseTarget__Class* type_info_ref = nullptr;
        }
        app::CameraChaseTarget__Class** type_info = &type_info_ref;
        inline app::CameraChaseTarget__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTarget__Class>(type_info, "", "CameraChaseTarget");
        }
        inline app::CameraChaseTarget* create() {
            return il2cpp::create_object<app::CameraChaseTarget>(get_class());
        }
    } // namespace CameraChaseTarget
} // namespace app::classes::types
