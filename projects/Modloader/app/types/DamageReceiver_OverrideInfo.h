#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Class.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Array.h>

namespace app::classes::types {
    namespace DamageReceiver_OverrideInfo {
        inline app::DamageReceiver_OverrideInfo__Class** type_info = (app::DamageReceiver_OverrideInfo__Class**)(modloader::win::memory::resolve_rva(0x04723828));
        inline app::DamageReceiver_OverrideInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_OverrideInfo__Class>(type_info, "Moon", "DamageReceiver", "OverrideInfo");
        }
        inline app::DamageReceiver_OverrideInfo* create() {
            return il2cpp::create_object<app::DamageReceiver_OverrideInfo>(get_class());
        }
        inline app::DamageReceiver_OverrideInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReceiver_OverrideInfo__Array>(get_class(), size);
        }
        inline app::DamageReceiver_OverrideInfo__Array* create_array(const std::vector<app::DamageReceiver_OverrideInfo*>& items) {
            return il2cpp::array_new<app::DamageReceiver_OverrideInfo__Array>(get_class(), items);
        }
    } // namespace DamageReceiver_OverrideInfo
} // namespace app::classes::types
