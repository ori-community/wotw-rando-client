#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BounceProjectile__Class.h>
#include <Modloader/app/structs/BounceProjectile.h>

namespace app::classes::types {
    namespace BounceProjectile {
        namespace {
            inline app::BounceProjectile__Class* type_info_ref = nullptr;
        }
        inline app::BounceProjectile__Class** type_info = &type_info_ref;
        inline app::BounceProjectile__Class* get_class() {
            return il2cpp::get_class<app::BounceProjectile__Class>(type_info, "", "BounceProjectile");
        }
        inline app::BounceProjectile* create() {
            return il2cpp::create_object<app::BounceProjectile>(get_class());
        }
    } // namespace BounceProjectile
} // namespace app::classes::types
