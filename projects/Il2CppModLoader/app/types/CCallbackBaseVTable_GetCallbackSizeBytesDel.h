#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCallbackBaseVTable_GetCallbackSizeBytesDel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class** type_info;
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCallbackBaseVTable_GetCallbackSizeBytesDel__Class>(type_info, "Steamworks", "CCallbackBaseVTable", "GetCallbackSizeBytesDel");
        }
        inline app::CCallbackBaseVTable_GetCallbackSizeBytesDel* create() {
            return il2cpp::create_object<app::CCallbackBaseVTable_GetCallbackSizeBytesDel>(get_class());
        }
    } // namespace CCallbackBaseVTable_GetCallbackSizeBytesDel
} // namespace app::classes::types
