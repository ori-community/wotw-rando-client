#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVREye__Enum__Class.h>
#include <Modloader/app/structs/EVREye__Enum.h>

namespace app::classes::types {
    namespace EVREye__Enum {
        inline app::EVREye__Enum__Class** type_info = (app::EVREye__Enum__Class**)(modloader::win::memory::resolve_rva(0x047972D8));
        inline app::EVREye__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVREye__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVREye");
        }
        inline app::EVREye__Enum* create() {
            return il2cpp::create_object<app::EVREye__Enum>(get_class());
        }
    } // namespace EVREye__Enum
} // namespace app::classes::types
