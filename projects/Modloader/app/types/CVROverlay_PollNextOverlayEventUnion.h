#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVROverlay_PollNextOverlayEventUnion {
        namespace {
            inline app::CVROverlay_PollNextOverlayEventUnion__Class* type_info_ref = nullptr;
        }
        inline app::CVROverlay_PollNextOverlayEventUnion__Class** type_info = &type_info_ref;
        inline app::CVROverlay_PollNextOverlayEventUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVROverlay_PollNextOverlayEventUnion__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVROverlay", "PollNextOverlayEventUnion");
        }
        inline app::CVROverlay_PollNextOverlayEventUnion* create() {
            return il2cpp::create_object<app::CVROverlay_PollNextOverlayEventUnion>(get_class());
        }
        inline app::CVROverlay_PollNextOverlayEventUnion__Boxed* box(app::CVROverlay_PollNextOverlayEventUnion value) {
            return il2cpp::box_value<app::CVROverlay_PollNextOverlayEventUnion__Boxed>(get_class(), value);
        }
    } // namespace CVROverlay_PollNextOverlayEventUnion
} // namespace app::classes::types
