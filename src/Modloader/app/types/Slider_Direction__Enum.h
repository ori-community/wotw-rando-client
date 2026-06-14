#pragma once
#include <Modloader/app/structs/Slider_Direction__Enum.h>
#include <Modloader/app/structs/Slider_Direction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Slider_Direction__Enum {
        inline app::Slider_Direction__Enum__Class** type_info() {
            static app::Slider_Direction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Slider_Direction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Slider_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Slider_Direction__Enum__Class>(type_info(), "UnityEngine.UI", "Slider", "Direction");
        }
        inline app::Slider_Direction__Enum* create() {
            return il2cpp::create_object<app::Slider_Direction__Enum>(get_class());
        }
    } // namespace Slider_Direction__Enum
} // namespace app::classes::types
