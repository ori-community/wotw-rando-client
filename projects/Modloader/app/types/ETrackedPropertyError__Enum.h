#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ETrackedPropertyError__Enum__Class.h>
#include <Modloader/app/structs/ETrackedPropertyError__Enum.h>

namespace app::classes::types {
    namespace ETrackedPropertyError__Enum {
        inline app::ETrackedPropertyError__Enum__Class** type_info = (app::ETrackedPropertyError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047674F0));
        inline app::ETrackedPropertyError__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedPropertyError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedPropertyError");
        }
        inline app::ETrackedPropertyError__Enum* create() {
            return il2cpp::create_object<app::ETrackedPropertyError__Enum>(get_class());
        }
    } // namespace ETrackedPropertyError__Enum
} // namespace app::classes::types
