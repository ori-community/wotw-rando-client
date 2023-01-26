#pragma once
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/EVREye__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVREye__Enum {
        inline app::EVREye__Enum__Class** type_info() {
            static app::EVREye__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVREye__Enum__Class**)(modloader::win::memory::resolve_rva(0x047972D8));
            }
            return cache;
        }
        inline app::EVREye__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVREye__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVREye");
        }
        inline app::EVREye__Enum* create() {
            return il2cpp::create_object<app::EVREye__Enum>(get_class());
        }
    } // namespace EVREye__Enum
} // namespace app::classes::types
