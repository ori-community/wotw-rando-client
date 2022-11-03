#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRApplicationError__Enum {
        inline app::EVRApplicationError__Enum__Class** type_info = (app::EVRApplicationError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047464B8));
        inline app::EVRApplicationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationError");
        }
        inline app::EVRApplicationError__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationError__Enum>(get_class());
        }
    } // namespace EVRApplicationError__Enum
} // namespace app::classes::types
