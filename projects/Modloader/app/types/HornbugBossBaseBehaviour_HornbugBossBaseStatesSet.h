#pragma once
#include <Modloader/app/structs/HornbugBossBaseBehaviour_HornbugBossBaseStatesSet.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornbugBossBaseBehaviour_HornbugBossBaseStatesSet {
        inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class** type_info() {
            static app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class* get_class() {
            return il2cpp::get_nested_class<app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class>(type_info(), "", "HornbugBossBaseBehaviour", "HornbugBossBaseStatesSet");
        }
        inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet* create() {
            return il2cpp::create_object<app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet>(get_class());
        }
    } // namespace HornbugBossBaseBehaviour_HornbugBossBaseStatesSet
} // namespace app::classes::types
