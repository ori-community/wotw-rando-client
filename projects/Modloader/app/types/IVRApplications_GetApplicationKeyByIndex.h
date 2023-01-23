#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByIndex__Class.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByIndex.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationKeyByIndex {
        inline app::IVRApplications_GetApplicationKeyByIndex__Class** type_info = (app::IVRApplications_GetApplicationKeyByIndex__Class**)(modloader::win::memory::resolve_rva(0x04703548));
        inline app::IVRApplications_GetApplicationKeyByIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationKeyByIndex__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationKeyByIndex");
        }
        inline app::IVRApplications_GetApplicationKeyByIndex* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationKeyByIndex>(get_class());
        }
    } // namespace IVRApplications_GetApplicationKeyByIndex
} // namespace app::classes::types
