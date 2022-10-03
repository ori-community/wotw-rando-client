#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEscapeBehaviour {
        namespace {
            app::SpiderBossEscapeBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossEscapeBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossEscapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEscapeBehaviour__Class>(type_info, "", "SpiderBossEscapeBehaviour");
        }
        inline app::SpiderBossEscapeBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossEscapeBehaviour>(get_class());
        }
    } // namespace SpiderBossEscapeBehaviour
} // namespace app::classes::types
