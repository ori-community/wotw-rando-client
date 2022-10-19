#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugEntity {
        inline app::SneezeSlugEntity__Class** type_info = (app::SneezeSlugEntity__Class**)(modloader::win::memory::resolve_rva(0x04740F60));
        inline app::SneezeSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugEntity__Class>(type_info, "", "SneezeSlugEntity");
        }
        inline app::SneezeSlugEntity* create() {
            return il2cpp::create_object<app::SneezeSlugEntity>(get_class());
        }
    } // namespace SneezeSlugEntity
} // namespace app::classes::types
