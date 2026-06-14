#pragma once
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum.h>
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ERegisterActivationCodeResult__Enum {
        inline app::ERegisterActivationCodeResult__Enum__Class** type_info() {
            static app::ERegisterActivationCodeResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ERegisterActivationCodeResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ERegisterActivationCodeResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ERegisterActivationCodeResult__Enum__Class>(type_info(), "Steamworks", "ERegisterActivationCodeResult");
        }
        inline app::ERegisterActivationCodeResult__Enum* create() {
            return il2cpp::create_object<app::ERegisterActivationCodeResult__Enum>(get_class());
        }
    } // namespace ERegisterActivationCodeResult__Enum
} // namespace app::classes::types
