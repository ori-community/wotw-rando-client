#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerSeekingProjectile {
        namespace {
            inline app::ServerSeekingProjectile__Class* type_info_ref = nullptr;
        }
        inline app::ServerSeekingProjectile__Class** type_info = &type_info_ref;
        inline app::ServerSeekingProjectile__Class* get_class() {
            return il2cpp::get_class<app::ServerSeekingProjectile__Class>(type_info, "", "ServerSeekingProjectile");
        }
        inline app::ServerSeekingProjectile* create() {
            return il2cpp::create_object<app::ServerSeekingProjectile>(get_class());
        }
    } // namespace ServerSeekingProjectile
} // namespace app::classes::types
