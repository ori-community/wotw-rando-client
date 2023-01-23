#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry__Class.h>
#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry.h>

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
