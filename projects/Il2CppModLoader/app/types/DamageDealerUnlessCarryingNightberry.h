#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealerUnlessCarryingNightberry {
        namespace {
            app::DamageDealerUnlessCarryingNightberry__Class* type_info_ref = nullptr;
        }
        app::DamageDealerUnlessCarryingNightberry__Class** type_info = &type_info_ref;
        inline app::DamageDealerUnlessCarryingNightberry__Class* get_class() {
            return il2cpp::get_class<app::DamageDealerUnlessCarryingNightberry__Class>(type_info, "", "DamageDealerUnlessCarryingNightberry");
        }
        inline app::DamageDealerUnlessCarryingNightberry* create() {
            return il2cpp::create_object<app::DamageDealerUnlessCarryingNightberry>(get_class());
        }
    } // namespace DamageDealerUnlessCarryingNightberry
} // namespace app::classes::types
