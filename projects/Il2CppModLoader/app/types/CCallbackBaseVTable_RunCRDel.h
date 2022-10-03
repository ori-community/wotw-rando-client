#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_RunCRDel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCallbackBaseVTable_RunCRDel__Class** type_info;
        inline app::CCallbackBaseVTable_RunCRDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_RunCRDel__Class>(type_info, "Steamworks", "CCallbackBaseVTable", "RunCRDel");
        }
        inline app::CCallbackBaseVTable_RunCRDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_RunCRDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_RunCRDel
} // namespace app::classes::types
