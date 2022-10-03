#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_RunCBDel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCallbackBaseVTable_RunCBDel__Class** type_info;
        inline app::CCallbackBaseVTable_RunCBDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_RunCBDel__Class>(type_info, "Steamworks", "CCallbackBaseVTable", "RunCBDel");
        }
        inline app::CCallbackBaseVTable_RunCBDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_RunCBDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_RunCBDel
} // namespace app::classes::types
