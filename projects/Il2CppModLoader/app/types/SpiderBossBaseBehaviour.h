#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBaseBehaviour {
        namespace {
            app::SpiderBossBaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpiderBossBaseBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBaseBehaviour__Class>(type_info, "", "SpiderBossBaseBehaviour");
        }
        inline app::SpiderBossBaseBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossBaseBehaviour>(get_class());
        }
        inline app::SpiderBossBaseBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossBaseBehaviour__Array>(get_class(), size);
        }
    } // namespace SpiderBossBaseBehaviour
} // namespace app::classes::types
