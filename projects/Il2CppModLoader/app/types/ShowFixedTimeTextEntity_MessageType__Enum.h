#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_MessageType__Enum {
        namespace {
            app::ShowFixedTimeTextEntity_MessageType__Enum__Class* type_info_ref = nullptr;
        }
        app::ShowFixedTimeTextEntity_MessageType__Enum__Class** type_info = &type_info_ref;
        inline app::ShowFixedTimeTextEntity_MessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowFixedTimeTextEntity_MessageType__Enum__Class>(type_info, "Moon.Timeline", "ShowFixedTimeTextEntity", "MessageType");
        }
        inline app::ShowFixedTimeTextEntity_MessageType__Enum* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_MessageType__Enum>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_MessageType__Enum
} // namespace app::classes::types
