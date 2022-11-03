#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EChaperoneConfigFile__Enum {
        inline app::EChaperoneConfigFile__Enum__Class** type_info = (app::EChaperoneConfigFile__Enum__Class**)(modloader::win::memory::resolve_rva(0x047831C8));
        inline app::EChaperoneConfigFile__Enum__Class* get_class() {
            return il2cpp::get_class<app::EChaperoneConfigFile__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EChaperoneConfigFile");
        }
        inline app::EChaperoneConfigFile__Enum* create() {
            return il2cpp::create_object<app::EChaperoneConfigFile__Enum>(get_class());
        }
    } // namespace EChaperoneConfigFile__Enum
} // namespace app::classes::types
