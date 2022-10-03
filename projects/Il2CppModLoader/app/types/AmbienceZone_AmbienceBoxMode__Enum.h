#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone_AmbienceBoxMode__Enum {
        namespace {
            app::AmbienceZone_AmbienceBoxMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AmbienceZone_AmbienceBoxMode__Enum__Class** type_info = &type_info_ref;
        inline app::AmbienceZone_AmbienceBoxMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbienceZone_AmbienceBoxMode__Enum__Class>(type_info, "", "AmbienceZone", "AmbienceBoxMode");
        }
        inline app::AmbienceZone_AmbienceBoxMode__Enum* create() {
            return il2cpp::create_object<app::AmbienceZone_AmbienceBoxMode__Enum>(get_class());
        }
    } // namespace AmbienceZone_AmbienceBoxMode__Enum
} // namespace app::classes::types
