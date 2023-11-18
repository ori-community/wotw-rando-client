#pragma once
#include <Modloader/app/structs/KamikazeLizardEntity.h>
#include <Modloader/app/structs/KamikazeLizardEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardEntity {
        inline app::KamikazeLizardEntity__Class** type_info() {
            static app::KamikazeLizardEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KamikazeLizardEntity__Class**)(modloader::win::memory::resolve_rva(0x04798F98));
            }
            return cache;
        }
        inline app::KamikazeLizardEntity__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardEntity__Class>(type_info(), "", "KamikazeLizardEntity");
        }
        inline app::KamikazeLizardEntity* create() {
            return il2cpp::create_object<app::KamikazeLizardEntity>(get_class());
        }
    } // namespace KamikazeLizardEntity
} // namespace app::classes::types
