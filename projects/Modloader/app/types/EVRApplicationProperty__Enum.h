#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVRApplicationProperty__Enum__Class.h>
#include <Modloader/app/structs/EVRApplicationProperty__Enum.h>

namespace app::classes::types {
    namespace EVRApplicationProperty__Enum {
        inline app::EVRApplicationProperty__Enum__Class** type_info = (app::EVRApplicationProperty__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796988));
        inline app::EVRApplicationProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationProperty__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationProperty");
        }
        inline app::EVRApplicationProperty__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationProperty__Enum>(get_class());
        }
    } // namespace EVRApplicationProperty__Enum
} // namespace app::classes::types
