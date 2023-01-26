#pragma once
#include <Modloader/app/structs/OpenVR.h>
#include <Modloader/app/structs/OpenVR__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenVR {
        inline app::OpenVR__Class** type_info() {
            static app::OpenVR__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenVR__Class**)(modloader::win::memory::resolve_rva(0x0473A648));
            }
            return cache;
        }
        inline app::OpenVR__Class* get_class() {
            return il2cpp::get_class<app::OpenVR__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "OpenVR");
        }
        inline app::OpenVR* create() {
            return il2cpp::create_object<app::OpenVR>(get_class());
        }
    } // namespace OpenVR
} // namespace app::classes::types
