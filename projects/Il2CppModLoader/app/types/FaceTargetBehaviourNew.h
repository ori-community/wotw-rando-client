#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaceTargetBehaviourNew {
        namespace {
            app::FaceTargetBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::FaceTargetBehaviourNew__Class** type_info = &type_info_ref;
        inline app::FaceTargetBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::FaceTargetBehaviourNew__Class>(type_info, "Moon", "FaceTargetBehaviourNew");
        }
        inline app::FaceTargetBehaviourNew* create() {
            return il2cpp::create_object<app::FaceTargetBehaviourNew>(get_class());
        }
    } // namespace FaceTargetBehaviourNew
} // namespace app::classes::types
