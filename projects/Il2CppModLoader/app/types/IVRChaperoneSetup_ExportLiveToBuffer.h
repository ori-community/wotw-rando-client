#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ExportLiveToBuffer {
        inline app::IVRChaperoneSetup_ExportLiveToBuffer__Class** type_info = (app::IVRChaperoneSetup_ExportLiveToBuffer__Class**)(modloader::win::memory::resolve_rva(0x04780230));
        inline app::IVRChaperoneSetup_ExportLiveToBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ExportLiveToBuffer__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ExportLiveToBuffer");
        }
        inline app::IVRChaperoneSetup_ExportLiveToBuffer* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ExportLiveToBuffer>(get_class());
        }
    } // namespace IVRChaperoneSetup_ExportLiveToBuffer
} // namespace app::classes::types
