#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KamikazeLizardExplosion__Class.h>
#include <Modloader/app/structs/KamikazeLizardExplosion.h>

namespace app::classes::types {
    namespace KamikazeLizardExplosion {
        namespace {
            inline app::KamikazeLizardExplosion__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeLizardExplosion__Class** type_info = &type_info_ref;
        inline app::KamikazeLizardExplosion__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardExplosion__Class>(type_info, "", "KamikazeLizardExplosion");
        }
        inline app::KamikazeLizardExplosion* create() {
            return il2cpp::create_object<app::KamikazeLizardExplosion>(get_class());
        }
    } // namespace KamikazeLizardExplosion
} // namespace app::classes::types
