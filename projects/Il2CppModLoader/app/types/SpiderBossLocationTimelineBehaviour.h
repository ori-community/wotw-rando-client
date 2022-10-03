#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineBehaviour {
        namespace {
            app::SpiderBossLocationTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineBehaviour__Class>(type_info, "", "SpiderBossLocationTimelineBehaviour");
        }
        inline app::SpiderBossLocationTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTimelineBehaviour
} // namespace app::classes::types
