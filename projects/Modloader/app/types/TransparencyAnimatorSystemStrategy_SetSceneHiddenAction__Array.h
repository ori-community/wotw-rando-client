#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array {
        namespace {
            inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class** type_info = &type_info_ref;
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class>(type_info, "Moon.Timeline", "TransparencyAnimatorSystemStrategy+SetSceneHiddenAction[]");
        }
        inline app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array>(get_class());
        }
    } // namespace TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array
} // namespace app::classes::types
