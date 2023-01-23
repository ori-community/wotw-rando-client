#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KamikazeLizardDamageDealer__Class.h>
#include <Modloader/app/structs/KamikazeLizardDamageDealer.h>

namespace app::classes::types {
    namespace KamikazeLizardDamageDealer {
        namespace {
            inline app::KamikazeLizardDamageDealer__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeLizardDamageDealer__Class** type_info = &type_info_ref;
        inline app::KamikazeLizardDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardDamageDealer__Class>(type_info, "", "KamikazeLizardDamageDealer");
        }
        inline app::KamikazeLizardDamageDealer* create() {
            return il2cpp::create_object<app::KamikazeLizardDamageDealer>(get_class());
        }
    } // namespace KamikazeLizardDamageDealer
} // namespace app::classes::types
