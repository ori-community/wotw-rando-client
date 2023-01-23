#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_PostPresentHandoff__Class.h>
#include <Modloader/app/structs/IVRCompositor_PostPresentHandoff.h>

namespace app::classes::types {
    namespace IVRCompositor_PostPresentHandoff {
        inline app::IVRCompositor_PostPresentHandoff__Class** type_info = (app::IVRCompositor_PostPresentHandoff__Class**)(modloader::win::memory::resolve_rva(0x04727510));
        inline app::IVRCompositor_PostPresentHandoff__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_PostPresentHandoff__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_PostPresentHandoff");
        }
        inline app::IVRCompositor_PostPresentHandoff* create() {
            return il2cpp::create_object<app::IVRCompositor_PostPresentHandoff>(get_class());
        }
    } // namespace IVRCompositor_PostPresentHandoff
} // namespace app::classes::types
