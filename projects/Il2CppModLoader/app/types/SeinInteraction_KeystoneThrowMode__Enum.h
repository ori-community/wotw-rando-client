#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_KeystoneThrowMode__Enum {
        namespace {
            app::SeinInteraction_KeystoneThrowMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinInteraction_KeystoneThrowMode__Enum__Class** type_info = &type_info_ref;
        inline app::SeinInteraction_KeystoneThrowMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinInteraction_KeystoneThrowMode__Enum__Class>(type_info, "", "SeinInteraction", "KeystoneThrowMode");
        }
        inline app::SeinInteraction_KeystoneThrowMode__Enum* create() {
            return il2cpp::create_object<app::SeinInteraction_KeystoneThrowMode__Enum>(get_class());
        }
    } // namespace SeinInteraction_KeystoneThrowMode__Enum
} // namespace app::classes::types
