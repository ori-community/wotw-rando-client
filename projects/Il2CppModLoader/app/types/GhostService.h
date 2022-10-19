#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostService {
        inline app::GhostService__Class** type_info = (app::GhostService__Class**)(modloader::win::memory::resolve_rva(0x0474FB78));
        inline app::GhostService__Class* get_class() {
            return il2cpp::get_class<app::GhostService__Class>(type_info, "", "GhostService");
        }
        inline app::GhostService* create() {
            return il2cpp::create_object<app::GhostService>(get_class());
        }
    } // namespace GhostService
} // namespace app::classes::types
