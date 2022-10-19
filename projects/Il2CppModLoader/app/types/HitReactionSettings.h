#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionSettings {
        inline app::HitReactionSettings__Class** type_info = (app::HitReactionSettings__Class**)(modloader::win::memory::resolve_rva(0x04740F90));
        inline app::HitReactionSettings__Class* get_class() {
            return il2cpp::get_class<app::HitReactionSettings__Class>(type_info, "", "HitReactionSettings");
        }
        inline app::HitReactionSettings* create() {
            return il2cpp::create_object<app::HitReactionSettings>(get_class());
        }
    } // namespace HitReactionSettings
} // namespace app::classes::types
