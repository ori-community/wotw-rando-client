#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerContext__Class** type_info;
        inline app::ScenesManagerContext__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerContext__Class>(type_info, "", "ScenesManagerContext");
        }
        inline app::ScenesManagerContext* create() {
            return il2cpp::create_object<app::ScenesManagerContext>(get_class());
        }
    } // namespace ScenesManagerContext
} // namespace app::classes::types
