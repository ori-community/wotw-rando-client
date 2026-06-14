#pragma once
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/EVRApplicationError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRApplicationError__Enum {
        inline app::EVRApplicationError__Enum__Class** type_info() {
            static app::EVRApplicationError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRApplicationError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047464B8));
            }
            return cache;
        }
        inline app::EVRApplicationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRApplicationError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRApplicationError");
        }
        inline app::EVRApplicationError__Enum* create() {
            return il2cpp::create_object<app::EVRApplicationError__Enum>(get_class());
        }
    } // namespace EVRApplicationError__Enum
} // namespace app::classes::types
