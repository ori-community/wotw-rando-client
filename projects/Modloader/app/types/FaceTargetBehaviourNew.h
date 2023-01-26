#pragma once
#include <Modloader/app/structs/FaceTargetBehaviourNew.h>
#include <Modloader/app/structs/FaceTargetBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaceTargetBehaviourNew {
        inline app::FaceTargetBehaviourNew__Class** type_info() {
            static app::FaceTargetBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaceTargetBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaceTargetBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::FaceTargetBehaviourNew__Class>(type_info(), "Moon", "FaceTargetBehaviourNew");
        }
        inline app::FaceTargetBehaviourNew* create() {
            return il2cpp::create_object<app::FaceTargetBehaviourNew>(get_class());
        }
    } // namespace FaceTargetBehaviourNew
} // namespace app::classes::types
