#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IceSpiritFlameProjectile__Class.h>
#include <Modloader/app/structs/IceSpiritFlameProjectile.h>

namespace app::classes::types {
    namespace IceSpiritFlameProjectile {
        namespace {
            inline app::IceSpiritFlameProjectile__Class* type_info_ref = nullptr;
        }
        inline app::IceSpiritFlameProjectile__Class** type_info = &type_info_ref;
        inline app::IceSpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::IceSpiritFlameProjectile__Class>(type_info, "", "IceSpiritFlameProjectile");
        }
        inline app::IceSpiritFlameProjectile* create() {
            return il2cpp::create_object<app::IceSpiritFlameProjectile>(get_class());
        }
    } // namespace IceSpiritFlameProjectile
} // namespace app::classes::types
