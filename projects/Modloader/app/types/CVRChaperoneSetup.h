#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRChaperoneSetup {
        inline app::CVRChaperoneSetup__Class** type_info = (app::CVRChaperoneSetup__Class**)(modloader::win::memory::resolve_rva(0x04792898));
        inline app::CVRChaperoneSetup__Class* get_class() {
            return il2cpp::get_class<app::CVRChaperoneSetup__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRChaperoneSetup");
        }
        inline app::CVRChaperoneSetup* create() {
            return il2cpp::create_object<app::CVRChaperoneSetup>(get_class());
        }
    } // namespace CVRChaperoneSetup
} // namespace app::classes::types
