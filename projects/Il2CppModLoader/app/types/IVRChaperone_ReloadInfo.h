#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperone_ReloadInfo {
        inline app::IVRChaperone_ReloadInfo__Class** type_info = (app::IVRChaperone_ReloadInfo__Class**)(modloader::win::memory::resolve_rva(0x04784FD0));
        inline app::IVRChaperone_ReloadInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_ReloadInfo__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_ReloadInfo");
        }
        inline app::IVRChaperone_ReloadInfo* create() {
            return il2cpp::create_object<app::IVRChaperone_ReloadInfo>(get_class());
        }
    } // namespace IVRChaperone_ReloadInfo
} // namespace app::classes::types
