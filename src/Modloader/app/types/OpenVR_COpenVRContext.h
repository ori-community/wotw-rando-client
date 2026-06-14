#pragma once
#include <Modloader/app/structs/OpenVR_COpenVRContext.h>
#include <Modloader/app/structs/OpenVR_COpenVRContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenVR_COpenVRContext {
        inline app::OpenVR_COpenVRContext__Class** type_info() {
            static app::OpenVR_COpenVRContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpenVR_COpenVRContext__Class**)(modloader::win::memory::resolve_rva(0x0478EE18));
            }
            return cache;
        }
        inline app::OpenVR_COpenVRContext__Class* get_class() {
            return il2cpp::get_nested_class<app::OpenVR_COpenVRContext__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "OpenVR", "COpenVRContext");
        }
        inline app::OpenVR_COpenVRContext* create() {
            return il2cpp::create_object<app::OpenVR_COpenVRContext>(get_class());
        }
    } // namespace OpenVR_COpenVRContext
} // namespace app::classes::types
