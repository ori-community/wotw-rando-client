#pragma once
#include <Modloader/app/structs/SpiritLightType__Enum.h>
#include <Modloader/app/structs/SpiritLightType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightType__Enum {
        inline app::SpiritLightType__Enum__Class** type_info() {
            static app::SpiritLightType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightType__Enum__Class>(type_info(), "", "SpiritLightType");
        }
        inline app::SpiritLightType__Enum* create() {
            return il2cpp::create_object<app::SpiritLightType__Enum>(get_class());
        }
    } // namespace SpiritLightType__Enum
} // namespace app::classes::types
