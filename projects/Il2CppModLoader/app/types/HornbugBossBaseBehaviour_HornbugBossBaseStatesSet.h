#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornbugBossBaseBehaviour_HornbugBossBaseStatesSet {
        namespace {
            inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class* type_info_ref = nullptr;
        }
        inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class** type_info = &type_info_ref;
        inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class* get_class() {
            return il2cpp::get_nested_class<app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class>(type_info, "", "HornbugBossBaseBehaviour", "HornbugBossBaseStatesSet");
        }
        inline app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet* create() {
            return il2cpp::create_object<app::HornbugBossBaseBehaviour_HornbugBossBaseStatesSet>(get_class());
        }
    } // namespace HornbugBossBaseBehaviour_HornbugBossBaseStatesSet
} // namespace app::classes::types
