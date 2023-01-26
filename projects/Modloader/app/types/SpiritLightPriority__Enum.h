#pragma once
#include <Modloader/app/structs/SpiritLightPriority__Enum.h>
#include <Modloader/app/structs/SpiritLightPriority__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightPriority__Enum {
        inline app::SpiritLightPriority__Enum__Class** type_info() {
            static app::SpiritLightPriority__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightPriority__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightPriority__Enum__Class>(type_info(), "", "SpiritLightPriority");
        }
        inline app::SpiritLightPriority__Enum* create() {
            return il2cpp::create_object<app::SpiritLightPriority__Enum>(get_class());
        }
    } // namespace SpiritLightPriority__Enum
} // namespace app::classes::types
