#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationSupportedMimeTypes__Class.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationSupportedMimeTypes.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationSupportedMimeTypes {
        inline app::IVRApplications_GetApplicationSupportedMimeTypes__Class** type_info = (app::IVRApplications_GetApplicationSupportedMimeTypes__Class**)(modloader::win::memory::resolve_rva(0x04728D10));
        inline app::IVRApplications_GetApplicationSupportedMimeTypes__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationSupportedMimeTypes__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationSupportedMimeTypes");
        }
        inline app::IVRApplications_GetApplicationSupportedMimeTypes* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationSupportedMimeTypes>(get_class());
        }
    } // namespace IVRApplications_GetApplicationSupportedMimeTypes
} // namespace app::classes::types
