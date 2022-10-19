#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeystonePickup_KeystoneType__Enum {
        namespace {
            inline app::KeystonePickup_KeystoneType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KeystonePickup_KeystoneType__Enum__Class** type_info = &type_info_ref;
        inline app::KeystonePickup_KeystoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeystonePickup_KeystoneType__Enum__Class>(type_info, "", "KeystonePickup", "KeystoneType");
        }
        inline app::KeystonePickup_KeystoneType__Enum* create() {
            return il2cpp::create_object<app::KeystonePickup_KeystoneType__Enum>(get_class());
        }
    } // namespace KeystonePickup_KeystoneType__Enum
} // namespace app::classes::types
