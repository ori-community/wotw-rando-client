#pragma once
#include <Modloader/app/structs/CVROverlay_PollNextOverlayEventPacked.h>
#include <Modloader/app/structs/CVROverlay_PollNextOverlayEventPacked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVROverlay_PollNextOverlayEventPacked {
        inline app::CVROverlay_PollNextOverlayEventPacked__Class** type_info() {
            static app::CVROverlay_PollNextOverlayEventPacked__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVROverlay_PollNextOverlayEventPacked__Class**)(modloader::win::memory::resolve_rva(0x0474D478));
            }
            return cache;
        }
        inline app::CVROverlay_PollNextOverlayEventPacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVROverlay_PollNextOverlayEventPacked__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVROverlay", "_PollNextOverlayEventPacked");
        }
        inline app::CVROverlay_PollNextOverlayEventPacked* create() {
            return il2cpp::create_object<app::CVROverlay_PollNextOverlayEventPacked>(get_class());
        }
    } // namespace CVROverlay_PollNextOverlayEventPacked
} // namespace app::classes::types
