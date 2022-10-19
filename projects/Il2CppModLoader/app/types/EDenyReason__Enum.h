#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EDenyReason__Enum {
        namespace {
            inline app::EDenyReason__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EDenyReason__Enum__Class** type_info = &type_info_ref;
        inline app::EDenyReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDenyReason__Enum__Class>(type_info, "Steamworks", "EDenyReason");
        }
        inline app::EDenyReason__Enum* create() {
            return il2cpp::create_object<app::EDenyReason__Enum>(get_class());
        }
    } // namespace EDenyReason__Enum
} // namespace app::classes::types
