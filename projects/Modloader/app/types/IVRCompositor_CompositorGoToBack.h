#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_CompositorGoToBack__Class.h>
#include <Modloader/app/structs/IVRCompositor_CompositorGoToBack.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorGoToBack {
        inline app::IVRCompositor_CompositorGoToBack__Class** type_info = (app::IVRCompositor_CompositorGoToBack__Class**)(modloader::win::memory::resolve_rva(0x04762720));
        inline app::IVRCompositor_CompositorGoToBack__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorGoToBack__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorGoToBack");
        }
        inline app::IVRCompositor_CompositorGoToBack* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorGoToBack>(get_class());
        }
    } // namespace IVRCompositor_CompositorGoToBack
} // namespace app::classes::types
