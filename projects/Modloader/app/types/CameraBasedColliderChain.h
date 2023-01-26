#pragma once
#include <Modloader/app/structs/CameraBasedColliderChain.h>
#include <Modloader/app/structs/CameraBasedColliderChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraBasedColliderChain {
        inline app::CameraBasedColliderChain__Class** type_info() {
            static app::CameraBasedColliderChain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraBasedColliderChain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraBasedColliderChain__Class* get_class() {
            return il2cpp::get_class<app::CameraBasedColliderChain__Class>(type_info(), "", "CameraBasedColliderChain");
        }
        inline app::CameraBasedColliderChain* create() {
            return il2cpp::create_object<app::CameraBasedColliderChain>(get_class());
        }
    } // namespace CameraBasedColliderChain
} // namespace app::classes::types
