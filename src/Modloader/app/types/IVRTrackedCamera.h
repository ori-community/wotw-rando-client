#pragma once
#include <Modloader/app/structs/IVRTrackedCamera.h>
#include <Modloader/app/structs/IVRTrackedCamera__Boxed.h>
#include <Modloader/app/structs/IVRTrackedCamera__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera {
        inline app::IVRTrackedCamera__Class** type_info() {
            static app::IVRTrackedCamera__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera__Class**)(modloader::win::memory::resolve_rva(0x04753558));
            }
            return cache;
        }
        inline app::IVRTrackedCamera__Class* get_class() {
            return il2cpp::get_class<app::IVRTrackedCamera__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera");
        }
        inline app::IVRTrackedCamera* create() {
            return il2cpp::create_object<app::IVRTrackedCamera>(get_class());
        }
        inline app::IVRTrackedCamera__Boxed* box(app::IVRTrackedCamera value) {
            return il2cpp::box_value<app::IVRTrackedCamera__Boxed>(get_class(), value);
        }
    } // namespace IVRTrackedCamera
} // namespace app::classes::types
