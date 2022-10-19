#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuPlatformMovement {
        namespace {
            inline app::KuPlatformMovement__Class* type_info_ref = nullptr;
        }
        inline app::KuPlatformMovement__Class** type_info = &type_info_ref;
        inline app::KuPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::KuPlatformMovement__Class>(type_info, "", "KuPlatformMovement");
        }
        inline app::KuPlatformMovement* create() {
            return il2cpp::create_object<app::KuPlatformMovement>(get_class());
        }
    } // namespace KuPlatformMovement
} // namespace app::classes::types
