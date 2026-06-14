#pragma once
#include <Modloader/app/structs/EVRApplicationTransitionState__Enum.h>
#include <Modloader/app/structs/EVRApplicationTransitionState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationTransitionState__Enum {
        inline app::EVRApplicationTransitionState__Enum__Class** type_info() {
            static app::EVRApplicationTransitionState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRApplicationTransitionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472A438));
            }
            return cache;
        }
        inline app::EVRApplicationTransitionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationTransitionState__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationTransitionState");
        }
        inline app::EVRApplicationTransitionState__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationTransitionState__Enum>(get_class());
        }
    } // namespace EVRApplicationTransitionState__Enum
} // namespace app::classes::types
