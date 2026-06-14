#pragma once
#include <Modloader/app/structs/AmbienceZone_AmbienceBoxMode__Enum.h>
#include <Modloader/app/structs/AmbienceZone_AmbienceBoxMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone_AmbienceBoxMode__Enum {
        inline app::AmbienceZone_AmbienceBoxMode__Enum__Class** type_info() {
            static app::AmbienceZone_AmbienceBoxMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmbienceZone_AmbienceBoxMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmbienceZone_AmbienceBoxMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbienceZone_AmbienceBoxMode__Enum__Class>(type_info(), "", "AmbienceZone", "AmbienceBoxMode");
        }
        inline app::AmbienceZone_AmbienceBoxMode__Enum* create() {
            return il2cpp::create_object<app::AmbienceZone_AmbienceBoxMode__Enum>(get_class());
        }
    } // namespace AmbienceZone_AmbienceBoxMode__Enum
} // namespace app::classes::types
