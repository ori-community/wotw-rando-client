#pragma once
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByIndex.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByIndex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications_GetApplicationKeyByIndex {
        inline app::IVRApplications_GetApplicationKeyByIndex__Class** type_info() {
            static app::IVRApplications_GetApplicationKeyByIndex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications_GetApplicationKeyByIndex__Class**)(modloader::win::memory::resolve_rva(0x04703548));
            }
            return cache;
        }
        inline app::IVRApplications_GetApplicationKeyByIndex__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRApplications_GetApplicationKeyByIndex__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications", "_GetApplicationKeyByIndex");
        }
        inline app::IVRApplications_GetApplicationKeyByIndex* create() {
            return il2cpp::create_object<app::IVRApplications_GetApplicationKeyByIndex>(get_class());
        }
    } // namespace IVRApplications_GetApplicationKeyByIndex
} // namespace app::classes::types
