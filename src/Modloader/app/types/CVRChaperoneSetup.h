#pragma once
#include <Modloader/app/structs/CVRChaperoneSetup.h>
#include <Modloader/app/structs/CVRChaperoneSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRChaperoneSetup {
        inline app::CVRChaperoneSetup__Class** type_info() {
            static app::CVRChaperoneSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRChaperoneSetup__Class**)(modloader::win::memory::resolve_rva(0x04792898));
            }
            return cache;
        }
        inline app::CVRChaperoneSetup__Class* get_class() {
            return il2cpp::get_class<app::CVRChaperoneSetup__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRChaperoneSetup");
        }
        inline app::CVRChaperoneSetup* create() {
            return il2cpp::create_object<app::CVRChaperoneSetup>(get_class());
        }
    } // namespace CVRChaperoneSetup
} // namespace app::classes::types
