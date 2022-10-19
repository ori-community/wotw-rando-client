#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EDurationControlNotification__Enum {
        namespace {
            inline app::EDurationControlNotification__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EDurationControlNotification__Enum__Class** type_info = &type_info_ref;
        inline app::EDurationControlNotification__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDurationControlNotification__Enum__Class>(type_info, "Steamworks", "EDurationControlNotification");
        }
        inline app::EDurationControlNotification__Enum* create() {
            return il2cpp::create_object<app::EDurationControlNotification__Enum>(get_class());
        }
    } // namespace EDurationControlNotification__Enum
} // namespace app::classes::types
