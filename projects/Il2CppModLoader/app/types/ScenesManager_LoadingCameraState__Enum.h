#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManager_LoadingCameraState__Enum {
        namespace {
            app::ScenesManager_LoadingCameraState__Enum__Class* type_info_ref = nullptr;
        }
        app::ScenesManager_LoadingCameraState__Enum__Class** type_info = &type_info_ref;
        inline app::ScenesManager_LoadingCameraState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_LoadingCameraState__Enum__Class>(type_info, "", "ScenesManager", "LoadingCameraState");
        }
        inline app::ScenesManager_LoadingCameraState__Enum* create() {
            return il2cpp::create_object<app::ScenesManager_LoadingCameraState__Enum>(get_class());
        }
    } // namespace ScenesManager_LoadingCameraState__Enum
} // namespace app::classes::types
