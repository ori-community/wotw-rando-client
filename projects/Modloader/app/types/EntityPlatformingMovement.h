#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPlatformingMovement__Class.h>
#include <Modloader/app/structs/EntityPlatformingMovement.h>

namespace app::classes::types {
    namespace EntityPlatformingMovement {
        inline app::EntityPlatformingMovement__Class** type_info = (app::EntityPlatformingMovement__Class**)(modloader::win::memory::resolve_rva(0x04797510));
        inline app::EntityPlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::EntityPlatformingMovement__Class>(type_info, "", "EntityPlatformingMovement");
        }
        inline app::EntityPlatformingMovement* create() {
            return il2cpp::create_object<app::EntityPlatformingMovement>(get_class());
        }
    } // namespace EntityPlatformingMovement
} // namespace app::classes::types
