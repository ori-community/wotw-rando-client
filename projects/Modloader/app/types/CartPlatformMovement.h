#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartPlatformMovement__Class.h>
#include <Modloader/app/structs/CartPlatformMovement.h>

namespace app::classes::types {
    namespace CartPlatformMovement {
        namespace {
            inline app::CartPlatformMovement__Class* type_info_ref = nullptr;
        }
        inline app::CartPlatformMovement__Class** type_info = &type_info_ref;
        inline app::CartPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::CartPlatformMovement__Class>(type_info, "", "CartPlatformMovement");
        }
        inline app::CartPlatformMovement* create() {
            return il2cpp::create_object<app::CartPlatformMovement>(get_class());
        }
    } // namespace CartPlatformMovement
} // namespace app::classes::types
