#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRApplicationTransitionState__Enum {
        inline app::EVRApplicationTransitionState__Enum__Class** type_info = (app::EVRApplicationTransitionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472A438));
        inline app::EVRApplicationTransitionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationTransitionState__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationTransitionState");
        }
        inline app::EVRApplicationTransitionState__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationTransitionState__Enum>(get_class());
        }
    } // namespace EVRApplicationTransitionState__Enum
} // namespace app::classes::types
