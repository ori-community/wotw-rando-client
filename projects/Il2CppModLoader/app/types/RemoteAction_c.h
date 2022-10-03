#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteAction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoteAction_c__Class** type_info;
        inline app::RemoteAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RemoteAction_c__Class>(type_info, "", "RemoteAction", "<>c");
        }
        inline app::RemoteAction_c* create() {
            return il2cpp::create_object<app::RemoteAction_c>(get_class());
        }
    } // namespace RemoteAction_c
} // namespace app::classes::types
