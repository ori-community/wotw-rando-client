#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageReceiver_DamageEntry {
        inline app::DamageReceiver_DamageEntry__Class** type_info = (app::DamageReceiver_DamageEntry__Class**)(modloader::win::memory::resolve_rva(0x0472B158));
        inline app::DamageReceiver_DamageEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_DamageEntry__Class>(type_info, "Moon", "DamageReceiver", "DamageEntry");
        }
        inline app::DamageReceiver_DamageEntry* create() {
            return il2cpp::create_object<app::DamageReceiver_DamageEntry>(get_class());
        }
        inline app::DamageReceiver_DamageEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReceiver_DamageEntry__Array>(get_class(), size);
        }
        inline app::DamageReceiver_DamageEntry__Array* create_array(const std::vector<app::DamageReceiver_DamageEntry*>& items) {
            return il2cpp::array_new<app::DamageReceiver_DamageEntry__Array>(get_class(), items);
        }
    } // namespace DamageReceiver_DamageEntry
} // namespace app::classes::types
