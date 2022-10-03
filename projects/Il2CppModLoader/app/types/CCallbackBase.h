#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCallbackBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CCallbackBase__Class** type_info;
        inline app::CCallbackBase__Class* get_class() {
            return il2cpp::get_class<app::CCallbackBase__Class>(type_info, "Steamworks", "CCallbackBase");
        }
        inline app::CCallbackBase* create() {
            return il2cpp::create_object<app::CCallbackBase>(get_class());
        }
    } // namespace CCallbackBase
} // namespace app::classes::types
