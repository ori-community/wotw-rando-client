#pragma once
#include <Modloader/app/structs/IVRChaperoneSetup.h>
#include <Modloader/app/structs/IVRChaperoneSetup__Boxed.h>
#include <Modloader/app/structs/IVRChaperoneSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperoneSetup {
        inline app::IVRChaperoneSetup__Class** type_info() {
            static app::IVRChaperoneSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperoneSetup__Class**)(modloader::win::memory::resolve_rva(0x0471AFA0));
            }
            return cache;
        }
        inline app::IVRChaperoneSetup__Class* get_class() {
            return il2cpp::get_class<app::IVRChaperoneSetup__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperoneSetup");
        }
        inline app::IVRChaperoneSetup* create() {
            return il2cpp::create_object<app::IVRChaperoneSetup>(get_class());
        }
        inline app::IVRChaperoneSetup__Boxed* box(app::IVRChaperoneSetup value) {
            return il2cpp::box_value<app::IVRChaperoneSetup__Boxed>(get_class(), value);
        }
    } // namespace IVRChaperoneSetup
} // namespace app::classes::types
