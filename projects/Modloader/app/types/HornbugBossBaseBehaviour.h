#pragma once
#include <Modloader/app/structs/HornbugBossBaseBehaviour.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornbugBossBaseBehaviour {
        inline app::HornbugBossBaseBehaviour__Class** type_info() {
            static app::HornbugBossBaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornbugBossBaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornbugBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossBaseBehaviour__Class>(type_info(), "", "HornbugBossBaseBehaviour");
        }
        inline app::HornbugBossBaseBehaviour* create() {
            return il2cpp::create_object<app::HornbugBossBaseBehaviour>(get_class());
        }
    } // namespace HornbugBossBaseBehaviour
} // namespace app::classes::types
