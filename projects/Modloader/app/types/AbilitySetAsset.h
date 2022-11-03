#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbilitySetAsset {
        namespace {
            inline app::AbilitySetAsset__Class* type_info_ref = nullptr;
        }
        inline app::AbilitySetAsset__Class** type_info = &type_info_ref;
        inline app::AbilitySetAsset__Class* get_class() {
            return il2cpp::get_class<app::AbilitySetAsset__Class>(type_info, "", "AbilitySetAsset");
        }
        inline app::AbilitySetAsset* create() {
            return il2cpp::create_object<app::AbilitySetAsset>(get_class());
        }
    } // namespace AbilitySetAsset
} // namespace app::classes::types
