#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class** type_info;
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class* get_class() {
            return il2cpp::get_nested_class<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy", "SetSceneHiddenAction");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction>(get_class());
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed* box(app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction value) {
            return il2cpp::box_value<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed>(get_class(), value);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* create_array(int size) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array>(get_class(), size);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* create_array(const std::vector<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed>& items) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array>(get_class(), items);
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction
} // namespace app::classes::types
