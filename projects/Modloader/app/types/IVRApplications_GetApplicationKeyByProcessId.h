#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationKeyByProcessId {
        inline app::IVRApplications_GetApplicationKeyByProcessId__Class** type_info = (app::IVRApplications_GetApplicationKeyByProcessId__Class**)(modloader::win::memory::resolve_rva(0x0477B5D0));
        inline app::IVRApplications_GetApplicationKeyByProcessId__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationKeyByProcessId__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationKeyByProcessId");
        }
        inline app::IVRApplications_GetApplicationKeyByProcessId* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationKeyByProcessId>(get_class());
        }
    } // namespace IVRApplications_GetApplicationKeyByProcessId
} // namespace app::classes::types
