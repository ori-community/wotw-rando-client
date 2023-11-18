#pragma once
#include <Modloader/app/structs/EVRApplicationProperty__Enum.h>
#include <Modloader/app/structs/EVRApplicationProperty__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationProperty__Enum {
        inline app::EVRApplicationProperty__Enum__Class** type_info() {
            static app::EVRApplicationProperty__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRApplicationProperty__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796988));
            }
            return cache;
        }
        inline app::EVRApplicationProperty__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationProperty__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationProperty");
        }
        inline app::EVRApplicationProperty__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationProperty__Enum>(get_class());
        }
    } // namespace EVRApplicationProperty__Enum
} // namespace app::classes::types
