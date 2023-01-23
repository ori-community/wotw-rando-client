#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewEntityPlatformMovement__Class.h>
#include <Modloader/app/structs/NewEntityPlatformMovement.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement {
        namespace {
            inline app::NewEntityPlatformMovement__Class* type_info_ref = nullptr;
        }
        inline app::NewEntityPlatformMovement__Class** type_info = &type_info_ref;
        inline app::NewEntityPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::NewEntityPlatformMovement__Class>(type_info, "", "NewEntityPlatformMovement");
        }
        inline app::NewEntityPlatformMovement* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement>(get_class());
        }
    } // namespace NewEntityPlatformMovement
} // namespace app::classes::types
