#pragma once
#include <Modloader/app/structs/SeinInteraction_KeystoneThrowMode__Enum.h>
#include <Modloader/app/structs/SeinInteraction_KeystoneThrowMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_KeystoneThrowMode__Enum {
        inline app::SeinInteraction_KeystoneThrowMode__Enum__Class** type_info() {
            static app::SeinInteraction_KeystoneThrowMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInteraction_KeystoneThrowMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInteraction_KeystoneThrowMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinInteraction_KeystoneThrowMode__Enum__Class>(type_info(), "", "SeinInteraction", "KeystoneThrowMode");
        }
        inline app::SeinInteraction_KeystoneThrowMode__Enum* create() {
            return il2cpp::create_object<app::SeinInteraction_KeystoneThrowMode__Enum>(get_class());
        }
    } // namespace SeinInteraction_KeystoneThrowMode__Enum
} // namespace app::classes::types
