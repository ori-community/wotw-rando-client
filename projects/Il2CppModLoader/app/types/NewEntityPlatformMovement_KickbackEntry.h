#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement_KickbackEntry {
        inline app::NewEntityPlatformMovement_KickbackEntry__Class** type_info = (app::NewEntityPlatformMovement_KickbackEntry__Class**)(modloader::win::memory::resolve_rva(0x04717840));
        inline app::NewEntityPlatformMovement_KickbackEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::NewEntityPlatformMovement_KickbackEntry__Class>(type_info, "", "NewEntityPlatformMovement", "KickbackEntry");
        }
        inline app::NewEntityPlatformMovement_KickbackEntry* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement_KickbackEntry>(get_class());
        }
    } // namespace NewEntityPlatformMovement_KickbackEntry
} // namespace app::classes::types
