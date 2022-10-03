#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationTurningTimelineBehaviour {
        namespace {
            app::SpiderBossLocationTurningTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationTurningTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTurningTimelineBehaviour__Class>(type_info, "", "SpiderBossLocationTurningTimelineBehaviour");
        }
        inline app::SpiderBossLocationTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTurningTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTurningTimelineBehaviour
} // namespace app::classes::types
