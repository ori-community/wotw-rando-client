#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EItemUpdateStatus__Enum {
        namespace {
            inline app::EItemUpdateStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EItemUpdateStatus__Enum__Class** type_info = &type_info_ref;
        inline app::EItemUpdateStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::EItemUpdateStatus__Enum__Class>(type_info, "Steamworks", "EItemUpdateStatus");
        }
        inline app::EItemUpdateStatus__Enum* create() {
            return il2cpp::create_object<app::EItemUpdateStatus__Enum>(get_class());
        }
    } // namespace EItemUpdateStatus__Enum
} // namespace app::classes::types
