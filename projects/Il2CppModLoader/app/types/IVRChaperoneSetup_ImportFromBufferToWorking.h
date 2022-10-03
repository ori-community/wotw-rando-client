#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup_ImportFromBufferToWorking {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperoneSetup_ImportFromBufferToWorking__Class** type_info;
        inline app::IVRChaperoneSetup_ImportFromBufferToWorking__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperoneSetup_ImportFromBufferToWorking__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup", "_ImportFromBufferToWorking");
        }
        inline app::IVRChaperoneSetup_ImportFromBufferToWorking* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup_ImportFromBufferToWorking>(get_class());
        }
    } // namespace IVRChaperoneSetup_ImportFromBufferToWorking
} // namespace app::classes::types
