#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRApplicationType__Enum {
        namespace {
            inline app::EVRApplicationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVRApplicationType__Enum__Class** type_info = &type_info_ref;
        inline app::EVRApplicationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationType");
        }
        inline app::EVRApplicationType__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationType__Enum>(get_class());
        }
    } // namespace EVRApplicationType__Enum
} // namespace app::classes::types
