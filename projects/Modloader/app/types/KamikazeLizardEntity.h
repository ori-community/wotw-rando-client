#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeLizardEntity {
        inline app::KamikazeLizardEntity__Class** type_info = (app::KamikazeLizardEntity__Class**)(modloader::win::memory::resolve_rva(0x04798F98));
        inline app::KamikazeLizardEntity__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardEntity__Class>(type_info, "", "KamikazeLizardEntity");
        }
        inline app::KamikazeLizardEntity* create() {
            return il2cpp::create_object<app::KamikazeLizardEntity>(get_class());
        }
    } // namespace KamikazeLizardEntity
} // namespace app::classes::types
