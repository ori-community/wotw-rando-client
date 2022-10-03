#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Wwise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Wwise__Class** type_info;
        inline app::Wwise__Class* get_class() {
            return il2cpp::get_class<app::Wwise__Class>(type_info, "Moon.Wwise", "Wwise");
        }
        inline app::Wwise* create() {
            return il2cpp::create_object<app::Wwise>(get_class());
        }
    } // namespace Wwise
} // namespace app::classes::types
