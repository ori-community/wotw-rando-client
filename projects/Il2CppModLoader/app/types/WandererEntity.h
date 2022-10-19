#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererEntity {
        inline app::WandererEntity__Class** type_info = (app::WandererEntity__Class**)(modloader::win::memory::resolve_rva(0x04725B28));
        inline app::WandererEntity__Class* get_class() {
            return il2cpp::get_class<app::WandererEntity__Class>(type_info, "", "WandererEntity");
        }
        inline app::WandererEntity* create() {
            return il2cpp::create_object<app::WandererEntity>(get_class());
        }
    } // namespace WandererEntity
} // namespace app::classes::types
