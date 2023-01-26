#pragma once
#include <Modloader/app/structs/CVRSystem.h>
#include <Modloader/app/structs/CVRSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRSystem {
        inline app::CVRSystem__Class** type_info() {
            static app::CVRSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRSystem__Class**)(modloader::win::memory::resolve_rva(0x0476C350));
            }
            return cache;
        }
        inline app::CVRSystem__Class* get_class() {
            return il2cpp::get_class<app::CVRSystem__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRSystem");
        }
        inline app::CVRSystem* create() {
            return il2cpp::create_object<app::CVRSystem>(get_class());
        }
    } // namespace CVRSystem
} // namespace app::classes::types
