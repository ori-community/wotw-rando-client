#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVROverlay_PollNextOverlayEventPacked {
        inline app::CVROverlay_PollNextOverlayEventPacked__Class** type_info = (app::CVROverlay_PollNextOverlayEventPacked__Class**)(modloader::win::memory::resolve_rva(0x0474D478));
        inline app::CVROverlay_PollNextOverlayEventPacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVROverlay_PollNextOverlayEventPacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVROverlay", "_PollNextOverlayEventPacked");
        }
        inline app::CVROverlay_PollNextOverlayEventPacked* create() {
            return il2cpp::create_object<app::CVROverlay_PollNextOverlayEventPacked>(get_class());
        }
    } // namespace CVROverlay_PollNextOverlayEventPacked
} // namespace app::classes::types
