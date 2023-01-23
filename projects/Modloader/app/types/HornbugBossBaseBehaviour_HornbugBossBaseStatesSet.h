#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour_HornbugBossBaseStatesSet.h>

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
