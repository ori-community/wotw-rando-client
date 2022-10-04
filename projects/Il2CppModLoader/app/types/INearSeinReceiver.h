#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INearSeinReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INearSeinReceiver__Class** type_info;
        inline app::INearSeinReceiver__Class* get_class() {
            return il2cpp::get_class<app::INearSeinReceiver__Class>(type_info, "", "INearSeinReceiver");
        }
    } // namespace INearSeinReceiver
} // namespace app::classes::types
