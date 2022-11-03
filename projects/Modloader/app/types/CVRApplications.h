#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRApplications {
        inline app::CVRApplications__Class** type_info = (app::CVRApplications__Class**)(modloader::win::memory::resolve_rva(0x04714AB0));
        inline app::CVRApplications__Class* get_class() {
            return il2cpp::get_class<app::CVRApplications__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRApplications");
        }
        inline app::CVRApplications* create() {
            return il2cpp::create_object<app::CVRApplications>(get_class());
        }
    } // namespace CVRApplications
} // namespace app::classes::types
