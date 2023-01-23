#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ElectricSlugDamageDealer__Class.h>
#include <Modloader/app/structs/ElectricSlugDamageDealer.h>

namespace app::classes::types {
    namespace ElectricSlugDamageDealer {
        namespace {
            inline app::ElectricSlugDamageDealer__Class* type_info_ref = nullptr;
        }
        inline app::ElectricSlugDamageDealer__Class** type_info = &type_info_ref;
        inline app::ElectricSlugDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::ElectricSlugDamageDealer__Class>(type_info, "", "ElectricSlugDamageDealer");
        }
        inline app::ElectricSlugDamageDealer* create() {
            return il2cpp::create_object<app::ElectricSlugDamageDealer>(get_class());
        }
    } // namespace ElectricSlugDamageDealer
} // namespace app::classes::types
