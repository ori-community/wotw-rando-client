#pragma once
#include <Modloader/app/structs/SpiderBossCameraTargetsProvider.h>
#include <Modloader/app/structs/SpiderBossCameraTargetsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossCameraTargetsProvider {
        inline app::SpiderBossCameraTargetsProvider__Class** type_info() {
            static app::SpiderBossCameraTargetsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossCameraTargetsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossCameraTargetsProvider__Class>(type_info(), "", "SpiderBossCameraTargetsProvider");
        }
        inline app::SpiderBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::SpiderBossCameraTargetsProvider>(get_class());
        }
    } // namespace SpiderBossCameraTargetsProvider
} // namespace app::classes::types
