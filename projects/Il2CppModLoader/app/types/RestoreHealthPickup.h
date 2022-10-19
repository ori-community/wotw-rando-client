#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestoreHealthPickup {
        inline app::RestoreHealthPickup__Class** type_info = (app::RestoreHealthPickup__Class**)(modloader::win::memory::resolve_rva(0x04751170));
        inline app::RestoreHealthPickup__Class* get_class() {
            return il2cpp::get_class<app::RestoreHealthPickup__Class>(type_info, "", "RestoreHealthPickup");
        }
        inline app::RestoreHealthPickup* create() {
            return il2cpp::create_object<app::RestoreHealthPickup>(get_class());
        }
    } // namespace RestoreHealthPickup
} // namespace app::classes::types
