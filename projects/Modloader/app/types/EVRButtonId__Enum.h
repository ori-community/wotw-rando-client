#pragma once
#include <Modloader/app/structs/EVRButtonId__Enum.h>
#include <Modloader/app/structs/EVRButtonId__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRButtonId__Enum {
        inline app::EVRButtonId__Enum__Class** type_info() {
            static app::EVRButtonId__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRButtonId__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471B7B8));
            }
            return cache;
        }
        inline app::EVRButtonId__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRButtonId__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRButtonId");
        }
        inline app::EVRButtonId__Enum* create() {
            return il2cpp::create_object<app::EVRButtonId__Enum>(get_class());
        }
    } // namespace EVRButtonId__Enum
} // namespace app::classes::types
