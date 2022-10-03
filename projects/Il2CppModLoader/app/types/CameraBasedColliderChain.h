#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraBasedColliderChain {
        namespace {
            app::CameraBasedColliderChain__Class* type_info_ref = nullptr;
        }
        app::CameraBasedColliderChain__Class** type_info = &type_info_ref;
        inline app::CameraBasedColliderChain__Class* get_class() {
            return il2cpp::get_class<app::CameraBasedColliderChain__Class>(type_info, "", "CameraBasedColliderChain");
        }
        inline app::CameraBasedColliderChain* create() {
            return il2cpp::create_object<app::CameraBasedColliderChain>(get_class());
        }
    } // namespace CameraBasedColliderChain
} // namespace app::classes::types
