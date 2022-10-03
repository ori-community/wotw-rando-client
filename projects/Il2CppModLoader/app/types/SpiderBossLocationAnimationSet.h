#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationAnimationSet {
        namespace {
            app::SpiderBossLocationAnimationSet__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationAnimationSet__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationAnimationSet__Class>(type_info, "", "SpiderBossLocationAnimationSet");
        }
        inline app::SpiderBossLocationAnimationSet* create() {
            return il2cpp::create_object<app::SpiderBossLocationAnimationSet>(get_class());
        }
    } // namespace SpiderBossLocationAnimationSet
} // namespace app::classes::types
