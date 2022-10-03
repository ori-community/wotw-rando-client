#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteropHelp_UTF8StringHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteropHelp_UTF8StringHandle__Class** type_info;
        inline app::InteropHelp_UTF8StringHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::InteropHelp_UTF8StringHandle__Class>(type_info, "Steamworks", "InteropHelp", "UTF8StringHandle");
        }
        inline app::InteropHelp_UTF8StringHandle* create() {
            return il2cpp::create_object<app::InteropHelp_UTF8StringHandle>(get_class());
        }
    } // namespace InteropHelp_UTF8StringHandle
} // namespace app::classes::types
