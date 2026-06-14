#pragma once
#include <Modloader/app/structs/ColorWriteMask__Enum.h>
#include <Modloader/app/structs/ColorWriteMask__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorWriteMask__Enum {
        inline app::ColorWriteMask__Enum__Class** type_info() {
            static app::ColorWriteMask__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorWriteMask__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475E428));
            }
            return cache;
        }
        inline app::ColorWriteMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColorWriteMask__Enum__Class>(type_info(), "UnityEngine.Rendering", "ColorWriteMask");
        }
        inline app::ColorWriteMask__Enum* create() {
            return il2cpp::create_object<app::ColorWriteMask__Enum>(get_class());
        }
    } // namespace ColorWriteMask__Enum
} // namespace app::classes::types
