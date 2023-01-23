#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageDealer_OverrideInfo__Class.h>
#include <Modloader/app/structs/DamageDealer_OverrideInfo.h>
#include <Modloader/app/structs/DamageDealer_OverrideInfo__Array.h>

namespace app::classes::types {
    namespace DamageDealer_OverrideInfo {
        inline app::DamageDealer_OverrideInfo__Class** type_info = (app::DamageDealer_OverrideInfo__Class**)(modloader::win::memory::resolve_rva(0x0470FBA0));
        inline app::DamageDealer_OverrideInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_OverrideInfo__Class>(type_info, "", "DamageDealer", "OverrideInfo");
        }
        inline app::DamageDealer_OverrideInfo* create() {
            return il2cpp::create_object<app::DamageDealer_OverrideInfo>(get_class());
        }
        inline app::DamageDealer_OverrideInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageDealer_OverrideInfo__Array>(get_class(), size);
        }
        inline app::DamageDealer_OverrideInfo__Array* create_array(const std::vector<app::DamageDealer_OverrideInfo*>& items) {
            return il2cpp::array_new<app::DamageDealer_OverrideInfo__Array>(get_class(), items);
        }
    } // namespace DamageDealer_OverrideInfo
} // namespace app::classes::types
