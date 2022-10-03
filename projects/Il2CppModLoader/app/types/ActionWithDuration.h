#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionWithDuration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionWithDuration__Class** type_info;
        inline app::ActionWithDuration__Class* get_class() {
            return il2cpp::get_class<app::ActionWithDuration__Class>(type_info, "", "ActionWithDuration");
        }
        inline app::ActionWithDuration* create() {
            return il2cpp::create_object<app::ActionWithDuration>(get_class());
        }
    } // namespace ActionWithDuration
} // namespace app::classes::types
