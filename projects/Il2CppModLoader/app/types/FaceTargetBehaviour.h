#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaceTargetBehaviour {
        namespace {
            app::FaceTargetBehaviour__Class* type_info_ref = nullptr;
        }
        app::FaceTargetBehaviour__Class** type_info = &type_info_ref;
        inline app::FaceTargetBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FaceTargetBehaviour__Class>(type_info, "Moon", "FaceTargetBehaviour");
        }
        inline app::FaceTargetBehaviour* create() {
            return il2cpp::create_object<app::FaceTargetBehaviour>(get_class());
        }
    } // namespace FaceTargetBehaviour
} // namespace app::classes::types
