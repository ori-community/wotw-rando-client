#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVROverlay_PollNextOverlayEventPacked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVROverlay_PollNextOverlayEventPacked__Class** type_info;
        inline app::CVROverlay_PollNextOverlayEventPacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVROverlay_PollNextOverlayEventPacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVROverlay", "_PollNextOverlayEventPacked");
        }
        inline app::CVROverlay_PollNextOverlayEventPacked* create() {
            return il2cpp::create_object<app::CVROverlay_PollNextOverlayEventPacked>(get_class());
        }
    } // namespace CVROverlay_PollNextOverlayEventPacked
} // namespace app::classes::types
