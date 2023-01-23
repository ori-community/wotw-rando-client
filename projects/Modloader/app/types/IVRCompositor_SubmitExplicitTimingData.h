#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_SubmitExplicitTimingData__Class.h>
#include <Modloader/app/structs/IVRCompositor_SubmitExplicitTimingData.h>

namespace app::classes::types {
    namespace IVRCompositor_SubmitExplicitTimingData {
        inline app::IVRCompositor_SubmitExplicitTimingData__Class** type_info = (app::IVRCompositor_SubmitExplicitTimingData__Class**)(modloader::win::memory::resolve_rva(0x04745278));
        inline app::IVRCompositor_SubmitExplicitTimingData__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SubmitExplicitTimingData__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SubmitExplicitTimingData");
        }
        inline app::IVRCompositor_SubmitExplicitTimingData* create() {
            return il2cpp::create_object<app::IVRCompositor_SubmitExplicitTimingData>(get_class());
        }
    } // namespace IVRCompositor_SubmitExplicitTimingData
} // namespace app::classes::types
