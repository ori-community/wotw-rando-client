#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum__Class.h>
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum.h>

namespace app::classes::types {
    namespace ERegisterActivationCodeResult__Enum {
        namespace {
            inline app::ERegisterActivationCodeResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ERegisterActivationCodeResult__Enum__Class** type_info = &type_info_ref;
        inline app::ERegisterActivationCodeResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ERegisterActivationCodeResult__Enum__Class>(type_info, "Steamworks", "ERegisterActivationCodeResult");
        }
        inline app::ERegisterActivationCodeResult__Enum* create() {
            return il2cpp::create_object<app::ERegisterActivationCodeResult__Enum>(get_class());
        }
    } // namespace ERegisterActivationCodeResult__Enum
} // namespace app::classes::types
