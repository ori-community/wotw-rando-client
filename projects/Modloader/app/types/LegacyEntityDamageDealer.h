#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyEntityDamageDealer__Class.h>
#include <Modloader/app/structs/LegacyEntityDamageDealer.h>

namespace app::classes::types {
    namespace LegacyEntityDamageDealer {
        namespace {
            inline app::LegacyEntityDamageDealer__Class* type_info_ref = nullptr;
        }
        inline app::LegacyEntityDamageDealer__Class** type_info = &type_info_ref;
        inline app::LegacyEntityDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntityDamageDealer__Class>(type_info, "", "LegacyEntityDamageDealer");
        }
        inline app::LegacyEntityDamageDealer* create() {
            return il2cpp::create_object<app::LegacyEntityDamageDealer>(get_class());
        }
    } // namespace LegacyEntityDamageDealer
} // namespace app::classes::types
