#pragma once
#include <Modloader/app/structs/KeystonePickup_KeystoneType__Enum.h>
#include <Modloader/app/structs/KeystonePickup_KeystoneType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeystonePickup_KeystoneType__Enum {
        inline app::KeystonePickup_KeystoneType__Enum__Class** type_info() {
            static app::KeystonePickup_KeystoneType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeystonePickup_KeystoneType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeystonePickup_KeystoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeystonePickup_KeystoneType__Enum__Class>(type_info(), "", "KeystonePickup", "KeystoneType");
        }
        inline app::KeystonePickup_KeystoneType__Enum* create() {
            return il2cpp::create_object<app::KeystonePickup_KeystoneType__Enum>(get_class());
        }
    } // namespace KeystonePickup_KeystoneType__Enum
} // namespace app::classes::types
