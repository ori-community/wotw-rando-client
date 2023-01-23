#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_PollNextOverlayEvent__Class.h>
#include <Modloader/app/structs/IVROverlay_PollNextOverlayEvent.h>

namespace app::classes::types {
    namespace IVROverlay_PollNextOverlayEvent {
        inline app::IVROverlay_PollNextOverlayEvent__Class** type_info = (app::IVROverlay_PollNextOverlayEvent__Class**)(modloader::win::memory::resolve_rva(0x0478AF40));
        inline app::IVROverlay_PollNextOverlayEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_PollNextOverlayEvent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_PollNextOverlayEvent");
        }
        inline app::IVROverlay_PollNextOverlayEvent* create() {
            return il2cpp::create_object<app::IVROverlay_PollNextOverlayEvent>(get_class());
        }
    } // namespace IVROverlay_PollNextOverlayEvent
} // namespace app::classes::types
