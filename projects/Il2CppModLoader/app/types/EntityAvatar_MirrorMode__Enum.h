#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityAvatar_MirrorMode__Enum {
        namespace {
            app::EntityAvatar_MirrorMode__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityAvatar_MirrorMode__Enum__Class** type_info = &type_info_ref;
        inline app::EntityAvatar_MirrorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityAvatar_MirrorMode__Enum__Class>(type_info, "", "EntityAvatar", "MirrorMode");
        }
        inline app::EntityAvatar_MirrorMode__Enum* create() {
            return il2cpp::create_object<app::EntityAvatar_MirrorMode__Enum>(get_class());
        }
    } // namespace EntityAvatar_MirrorMode__Enum
} // namespace app::classes::types
