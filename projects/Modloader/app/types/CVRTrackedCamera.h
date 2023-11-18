#pragma once
#include <Modloader/app/structs/CVRTrackedCamera.h>
#include <Modloader/app/structs/CVRTrackedCamera__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRTrackedCamera {
        inline app::CVRTrackedCamera__Class** type_info() {
            static app::CVRTrackedCamera__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRTrackedCamera__Class**)(modloader::win::memory::resolve_rva(0x04711DC8));
            }
            return cache;
        }
        inline app::CVRTrackedCamera__Class* get_class() {
            return il2cpp::get_class<app::CVRTrackedCamera__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRTrackedCamera");
        }
        inline app::CVRTrackedCamera* create() {
            return il2cpp::create_object<app::CVRTrackedCamera>(get_class());
        }
    } // namespace CVRTrackedCamera
} // namespace app::classes::types
