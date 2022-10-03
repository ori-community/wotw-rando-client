#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ExportLiveToBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_ExportLiveToBuffer__Class** type_info;
        inline app::IVRChaperoneSetup_ExportLiveToBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ExportLiveToBuffer__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ExportLiveToBuffer");
        }
        inline app::IVRChaperoneSetup_ExportLiveToBuffer* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ExportLiveToBuffer>(get_class());
        }
    } // namespace IVRChaperoneSetup_ExportLiveToBuffer
} // namespace app::classes::types
