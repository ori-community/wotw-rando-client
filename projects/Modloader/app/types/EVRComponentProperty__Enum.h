#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRComponentProperty__Enum {
        namespace {
            inline app::EVRComponentProperty__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVRComponentProperty__Enum__Class** type_info = &type_info_ref;
        inline app::EVRComponentProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRComponentProperty__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRComponentProperty");
        }
        inline app::EVRComponentProperty__Enum* create() {
            return il2cpp::create_object<app::EVRComponentProperty__Enum>(get_class());
        }
    } // namespace EVRComponentProperty__Enum
} // namespace app::classes::types
