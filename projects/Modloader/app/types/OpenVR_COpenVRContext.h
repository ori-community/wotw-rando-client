#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpenVR_COpenVRContext {
        inline app::OpenVR_COpenVRContext__Class** type_info = (app::OpenVR_COpenVRContext__Class**)(modloader::win::memory::resolve_rva(0x0478EE18));
        inline app::OpenVR_COpenVRContext__Class* get_class() {
            return il2cpp::get_nested_class<app::OpenVR_COpenVRContext__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "OpenVR", "COpenVRContext");
        }
        inline app::OpenVR_COpenVRContext* create() {
            return il2cpp::create_object<app::OpenVR_COpenVRContext>(get_class());
        }
    } // namespace OpenVR_COpenVRContext
} // namespace app::classes::types
