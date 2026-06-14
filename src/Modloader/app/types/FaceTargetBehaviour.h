#pragma once
#include <Modloader/app/structs/FaceTargetBehaviour.h>
#include <Modloader/app/structs/FaceTargetBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaceTargetBehaviour {
        inline app::FaceTargetBehaviour__Class** type_info() {
            static app::FaceTargetBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FaceTargetBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FaceTargetBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FaceTargetBehaviour__Class>(type_info(), "Moon", "FaceTargetBehaviour");
        }
        inline app::FaceTargetBehaviour* create() {
            return il2cpp::create_object<app::FaceTargetBehaviour>(get_class());
        }
    } // namespace FaceTargetBehaviour
} // namespace app::classes::types
