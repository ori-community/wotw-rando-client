#pragma once
#include <Modloader/app/structs/IVRCompositor_ClearLastSubmittedFrame.h>
#include <Modloader/app/structs/IVRCompositor_ClearLastSubmittedFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ClearLastSubmittedFrame {
        inline app::IVRCompositor_ClearLastSubmittedFrame__Class** type_info() {
            static app::IVRCompositor_ClearLastSubmittedFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_ClearLastSubmittedFrame__Class**)(modloader::win::memory::resolve_rva(0x04724768));
            }
            return cache;
        }
        inline app::IVRCompositor_ClearLastSubmittedFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ClearLastSubmittedFrame__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ClearLastSubmittedFrame");
        }
        inline app::IVRCompositor_ClearLastSubmittedFrame* create() {
            return il2cpp::create_object<app::IVRCompositor_ClearLastSubmittedFrame>(get_class());
        }
    } // namespace IVRCompositor_ClearLastSubmittedFrame
} // namespace app::classes::types
