#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+SetSceneHiddenAction[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array
} // namespace app::classes::types
