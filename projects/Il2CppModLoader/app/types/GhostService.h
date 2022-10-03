#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostService__Class** type_info;
        inline app::GhostService__Class* get_class() {
            return il2cpp::get_class<app::GhostService__Class>(type_info, "", "GhostService");
        }
        inline app::GhostService* create() {
            return il2cpp::create_object<app::GhostService>(get_class());
        }
    } // namespace GhostService
} // namespace app::classes::types
