#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement {
        namespace {
            app::NewEntityPlatformMovement__Class* type_info_ref = nullptr;
        }
        app::NewEntityPlatformMovement__Class** type_info = &type_info_ref;
        inline app::NewEntityPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::NewEntityPlatformMovement__Class>(type_info, "", "NewEntityPlatformMovement");
        }
        inline app::NewEntityPlatformMovement* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement>(get_class());
        }
    } // namespace NewEntityPlatformMovement
} // namespace app::classes::types
