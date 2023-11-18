#pragma once
#include <Modloader/app/structs/SpiderBossBottomDamageDealerEnabler.h>
#include <Modloader/app/structs/SpiderBossBottomDamageDealerEnabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBottomDamageDealerEnabler {
        inline app::SpiderBossBottomDamageDealerEnabler__Class** type_info() {
            static app::SpiderBossBottomDamageDealerEnabler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBottomDamageDealerEnabler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBottomDamageDealerEnabler__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBottomDamageDealerEnabler__Class>(type_info(), "", "SpiderBossBottomDamageDealerEnabler");
        }
        inline app::SpiderBossBottomDamageDealerEnabler* create() {
            return il2cpp::create_object<app::SpiderBossBottomDamageDealerEnabler>(get_class());
        }
    } // namespace SpiderBossBottomDamageDealerEnabler
} // namespace app::classes::types
