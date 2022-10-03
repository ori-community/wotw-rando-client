#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventArgs__Class** type_info;
        inline app::EventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventArgs__Class>(type_info, "System", "EventArgs");
        }
        inline app::EventArgs* create() {
            return il2cpp::create_object<app::EventArgs>(get_class());
        }
    } // namespace EventArgs
} // namespace app::classes::types
