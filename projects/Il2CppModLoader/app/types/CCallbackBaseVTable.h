#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCallbackBaseVTable__Class** type_info;
        inline app::CCallbackBaseVTable__Class* get_class() {
            return il2cpp::get_class<app::CCallbackBaseVTable__Class>(type_info, "Steamworks", "CCallbackBaseVTable");
        }
        inline app::CCallbackBaseVTable* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable>(get_class());
        }
    } // namespace CCallbackBaseVTable
} // namespace app::classes::types
