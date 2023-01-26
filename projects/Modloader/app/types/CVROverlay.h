#pragma once
#include <Modloader/app/structs/CVROverlay.h>
#include <Modloader/app/structs/CVROverlay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVROverlay {
        inline app::CVROverlay__Class** type_info() {
            static app::CVROverlay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVROverlay__Class**)(modloader::win::memory::resolve_rva(0x0475A408));
            }
            return cache;
        }
        inline app::CVROverlay__Class* get_class() {
            return il2cpp::get_class<app::CVROverlay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVROverlay");
        }
        inline app::CVROverlay* create() {
            return il2cpp::create_object<app::CVROverlay>(get_class());
        }
    } // namespace CVROverlay
} // namespace app::classes::types
