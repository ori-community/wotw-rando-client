#pragma once
#include <Modloader/app/structs/ShowFixedTimeTextEntity_InteractionType__Enum.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_InteractionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_InteractionType__Enum {
        inline app::ShowFixedTimeTextEntity_InteractionType__Enum__Class** type_info() {
            static app::ShowFixedTimeTextEntity_InteractionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowFixedTimeTextEntity_InteractionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowFixedTimeTextEntity_InteractionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowFixedTimeTextEntity_InteractionType__Enum__Class>(type_info(), "Moon.Timeline", "ShowFixedTimeTextEntity", "InteractionType");
        }
        inline app::ShowFixedTimeTextEntity_InteractionType__Enum* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_InteractionType__Enum>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_InteractionType__Enum
} // namespace app::classes::types
