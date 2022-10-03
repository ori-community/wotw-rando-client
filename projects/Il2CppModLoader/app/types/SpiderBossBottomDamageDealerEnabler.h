#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBottomDamageDealerEnabler {
        namespace {
            app::SpiderBossBottomDamageDealerEnabler__Class* type_info_ref = nullptr;
        }
        app::SpiderBossBottomDamageDealerEnabler__Class** type_info = &type_info_ref;
        inline app::SpiderBossBottomDamageDealerEnabler__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBottomDamageDealerEnabler__Class>(type_info, "", "SpiderBossBottomDamageDealerEnabler");
        }
        inline app::SpiderBossBottomDamageDealerEnabler* create() {
            return il2cpp::create_object<app::SpiderBossBottomDamageDealerEnabler>(get_class());
        }
    } // namespace SpiderBossBottomDamageDealerEnabler
} // namespace app::classes::types
