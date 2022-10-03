#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoWorkEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoWorkEventArgs__Class** type_info;
        inline app::DoWorkEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DoWorkEventArgs__Class>(type_info, "System.ComponentModel", "DoWorkEventArgs");
        }
        inline app::DoWorkEventArgs* create() {
            return il2cpp::create_object<app::DoWorkEventArgs>(get_class());
        }
    } // namespace DoWorkEventArgs
} // namespace app::classes::types
