#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossCancellableController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossCancellableController__Class** type_info;
        inline app::SpiderBossCancellableController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossCancellableController__Class>(type_info, "", "SpiderBossCancellableController");
        }
        inline app::SpiderBossCancellableController* create() {
            return il2cpp::create_object<app::SpiderBossCancellableController>(get_class());
        }
    } // namespace SpiderBossCancellableController
} // namespace app::classes::types
