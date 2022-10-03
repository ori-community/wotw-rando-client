#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossSpitBehaviour {
        namespace {
            app::SpiderBossSpitBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossSpitBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossSpitBehaviour__Class>(type_info, "", "SpiderBossSpitBehaviour");
        }
        inline app::SpiderBossSpitBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossSpitBehaviour>(get_class());
        }
    } // namespace SpiderBossSpitBehaviour
} // namespace app::classes::types
