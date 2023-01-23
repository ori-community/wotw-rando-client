#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_WaitGetPoses__Class.h>
#include <Modloader/app/structs/IVRCompositor_WaitGetPoses.h>

namespace app::classes::types {
    namespace IVRCompositor_WaitGetPoses {
        inline app::IVRCompositor_WaitGetPoses__Class** type_info = (app::IVRCompositor_WaitGetPoses__Class**)(modloader::win::memory::resolve_rva(0x04779998));
        inline app::IVRCompositor_WaitGetPoses__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_WaitGetPoses__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_WaitGetPoses");
        }
        inline app::IVRCompositor_WaitGetPoses* create() {
            return il2cpp::create_object<app::IVRCompositor_WaitGetPoses>(get_class());
        }
    } // namespace IVRCompositor_WaitGetPoses
} // namespace app::classes::types
