#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trigger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Trigger__Class** type_info;
        inline app::Trigger__Class* get_class() {
            return il2cpp::get_class<app::Trigger__Class>(type_info, "AK.Wwise", "Trigger");
        }
        inline app::Trigger* create() {
            return il2cpp::create_object<app::Trigger>(get_class());
        }
    } // namespace Trigger
} // namespace app::classes::types
