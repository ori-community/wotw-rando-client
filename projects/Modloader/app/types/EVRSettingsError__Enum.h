#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVRSettingsError__Enum__Class.h>
#include <Modloader/app/structs/EVRSettingsError__Enum.h>

namespace app::classes::types {
    namespace EVRSettingsError__Enum {
        inline app::EVRSettingsError__Enum__Class** type_info = (app::EVRSettingsError__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753EA8));
        inline app::EVRSettingsError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRSettingsError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRSettingsError");
        }
        inline app::EVRSettingsError__Enum* create() {
            return il2cpp::create_object<app::EVRSettingsError__Enum>(get_class());
        }
    } // namespace EVRSettingsError__Enum
} // namespace app::classes::types
