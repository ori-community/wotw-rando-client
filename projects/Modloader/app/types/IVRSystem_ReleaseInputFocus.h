#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_ReleaseInputFocus__Class.h>
#include <Modloader/app/structs/IVRSystem_ReleaseInputFocus.h>

namespace app::classes::types {
    namespace IVRSystem_ReleaseInputFocus {
        inline app::IVRSystem_ReleaseInputFocus__Class** type_info = (app::IVRSystem_ReleaseInputFocus__Class**)(modloader::win::memory::resolve_rva(0x04768D98));
        inline app::IVRSystem_ReleaseInputFocus__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ReleaseInputFocus__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ReleaseInputFocus");
        }
        inline app::IVRSystem_ReleaseInputFocus* create() {
            return il2cpp::create_object<app::IVRSystem_ReleaseInputFocus>(get_class());
        }
    } // namespace IVRSystem_ReleaseInputFocus
} // namespace app::classes::types
