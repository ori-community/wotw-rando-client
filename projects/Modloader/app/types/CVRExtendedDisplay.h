#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CVRExtendedDisplay__Class.h>
#include <Modloader/app/structs/CVRExtendedDisplay.h>

namespace app::classes::types {
    namespace CVRExtendedDisplay {
        inline app::CVRExtendedDisplay__Class** type_info = (app::CVRExtendedDisplay__Class**)(modloader::win::memory::resolve_rva(0x04770C78));
        inline app::CVRExtendedDisplay__Class* get_class() {
            return il2cpp::get_class<app::CVRExtendedDisplay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRExtendedDisplay");
        }
        inline app::CVRExtendedDisplay* create() {
            return il2cpp::create_object<app::CVRExtendedDisplay>(get_class());
        }
    } // namespace CVRExtendedDisplay
} // namespace app::classes::types
