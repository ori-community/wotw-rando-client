#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WispMessageIcon_Wisp__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WispMessageIcon_Wisp__Enum__Class** type_info;
        inline app::WispMessageIcon_Wisp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WispMessageIcon_Wisp__Enum__Class>(type_info, "", "WispMessageIcon", "Wisp");
        }
        inline app::WispMessageIcon_Wisp__Enum* create() {
            return il2cpp::create_object<app::WispMessageIcon_Wisp__Enum>(get_class());
        }
    } // namespace WispMessageIcon_Wisp__Enum
} // namespace app::classes::types
