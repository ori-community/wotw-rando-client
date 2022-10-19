#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardEntity {
        inline app::LizardEntity__Class** type_info = (app::LizardEntity__Class**)(modloader::win::memory::resolve_rva(0x0477BD20));
        inline app::LizardEntity__Class* get_class() {
            return il2cpp::get_class<app::LizardEntity__Class>(type_info, "", "LizardEntity");
        }
        inline app::LizardEntity* create() {
            return il2cpp::create_object<app::LizardEntity>(get_class());
        }
    } // namespace LizardEntity
} // namespace app::classes::types
