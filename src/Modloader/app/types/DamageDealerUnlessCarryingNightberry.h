#pragma once
#include <Modloader/app/structs/DamageDealerUnlessCarryingNightberry.h>
#include <Modloader/app/structs/DamageDealerUnlessCarryingNightberry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDealerUnlessCarryingNightberry {
        inline app::DamageDealerUnlessCarryingNightberry__Class** type_info() {
            static app::DamageDealerUnlessCarryingNightberry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageDealerUnlessCarryingNightberry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageDealerUnlessCarryingNightberry__Class* get_class() {
            return il2cpp::get_class<app::DamageDealerUnlessCarryingNightberry__Class>(type_info(), "", "DamageDealerUnlessCarryingNightberry");
        }
        inline app::DamageDealerUnlessCarryingNightberry* create() {
            return il2cpp::create_object<app::DamageDealerUnlessCarryingNightberry>(get_class());
        }
    } // namespace DamageDealerUnlessCarryingNightberry
} // namespace app::classes::types
