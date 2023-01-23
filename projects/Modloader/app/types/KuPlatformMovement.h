#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuPlatformMovement__Class.h>
#include <Modloader/app/structs/KuPlatformMovement.h>

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
