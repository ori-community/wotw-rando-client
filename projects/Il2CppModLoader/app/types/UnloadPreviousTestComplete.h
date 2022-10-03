#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnloadPreviousTestComplete {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnloadPreviousTestComplete__Class** type_info;
        inline app::UnloadPreviousTestComplete__Class* get_class() {
            return il2cpp::get_class<app::UnloadPreviousTestComplete__Class>(type_info, "", "UnloadPreviousTestComplete");
        }
        inline app::UnloadPreviousTestComplete* create() {
            return il2cpp::create_object<app::UnloadPreviousTestComplete>(get_class());
        }
    } // namespace UnloadPreviousTestComplete
} // namespace app::classes::types
