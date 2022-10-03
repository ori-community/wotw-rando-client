#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneDataCaptureAgent_SceneLoadingStates__Enum {
        namespace {
            app::SceneDataCaptureAgent_SceneLoadingStates__Enum__Class* type_info_ref = nullptr;
        }
        app::SceneDataCaptureAgent_SceneLoadingStates__Enum__Class** type_info = &type_info_ref;
        inline app::SceneDataCaptureAgent_SceneLoadingStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneDataCaptureAgent_SceneLoadingStates__Enum__Class>(type_info, "", "SceneDataCaptureAgent", "SceneLoadingStates");
        }
        inline app::SceneDataCaptureAgent_SceneLoadingStates__Enum* create() {
            return il2cpp::create_object<app::SceneDataCaptureAgent_SceneLoadingStates__Enum>(get_class());
        }
    } // namespace SceneDataCaptureAgent_SceneLoadingStates__Enum
} // namespace app::classes::types
