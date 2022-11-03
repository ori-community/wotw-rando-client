#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerProjectile {
        namespace {
            inline app::ServerProjectile__Class* type_info_ref = nullptr;
        }
        inline app::ServerProjectile__Class** type_info = &type_info_ref;
        inline app::ServerProjectile__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectile__Class>(type_info, "", "ServerProjectile");
        }
        inline app::ServerProjectile* create() {
            return il2cpp::create_object<app::ServerProjectile>(get_class());
        }
    } // namespace ServerProjectile
} // namespace app::classes::types
