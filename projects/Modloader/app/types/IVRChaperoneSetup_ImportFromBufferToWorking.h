#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ImportFromBufferToWorking {
        inline app::IVRChaperoneSetup_ImportFromBufferToWorking__Class** type_info = (app::IVRChaperoneSetup_ImportFromBufferToWorking__Class**)(modloader::win::memory::resolve_rva(0x0472E8F8));
        inline app::IVRChaperoneSetup_ImportFromBufferToWorking__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ImportFromBufferToWorking__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ImportFromBufferToWorking");
        }
        inline app::IVRChaperoneSetup_ImportFromBufferToWorking* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ImportFromBufferToWorking>(get_class());
        }
    } // namespace IVRChaperoneSetup_ImportFromBufferToWorking
} // namespace app::classes::types
