#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayedLog {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayedLog__Class** type_info;
        inline app::DelayedLog__Class* get_class() {
            return il2cpp::get_class<app::DelayedLog__Class>(type_info, "", "DelayedLog");
        }
        inline app::DelayedLog* create() {
            return il2cpp::create_object<app::DelayedLog>(get_class());
        }
    } // namespace DelayedLog
} // namespace app::classes::types
